<?php

// Product migration
class WineProductMigration extends ExampleNodeMigration {

	public function __construct(array $arguments) 
	{
		parent::__construct($arguments);
		
		$this->addFieldMapping( 'field_illustration' , 'field_illustration')
	    	->sourceMigration('Files');		
		$this->addFieldMapping('field_illustration:file_class')
			     ->defaultValue('MigrateFileFid');
		
		$this->addFieldMapping('field_country', 'field_country');
		$this->addFieldMapping('field_supplier', 'field_supplier');
		
		$this->addFieldMapping( 'field_description_title_a')
			->defaultValue('Notes');
		$this->addFieldMapping( 'field_description_a' , 'field_notes');
		
		$this->addFieldMapping( 'field_description_title_b')
			->defaultValue('Tasting Notes');
		$this->addFieldMapping( 'field_description_b' , 'field_tasting_notes');
		
		$this->addFieldMapping( 'field_description_title_c')
			->defaultValue('');
		$this->addFieldMapping( 'field_description_c' , 'field_product_data');
		
		$this->addUnmigratedSources(array('field_notes:format', 'field_tasting_notes:format', 'field_product_data:format'));
		$this->addUnmigratedSources(array('field_illustration:list', 'field_illustration:data'));
		
		$this->addUnmigratedDestinations(array('field_product_categories','field_product_categories:source_type',
		'field_product_categories:create_term','field_product_categories:ignore_case'));
		$this->addUnmigratedDestinations(array('field_illustration:language','field_illustration:alt','field_illustration:title'));
		
		$this->addUnmigratedDestinations(array('field_description_a:language','field_description_title_a:language',
		'field_description_title_b:language','field_description_b:language','field_description_title_c:language',
		'field_description_c:language'));
		
		
		// Taxonomy Vocabularies . Note that we map migrated terms by the vocabulary ID.
		$this->addFieldMapping('field_features', '8')
			->sourceMigration('Features');
		$this->addFieldMapping('field_features:source_type')
			->defaultValue('tid');			
		$this->addFieldMapping('field_features:create_term')
			->defaultValue(TRUE);
		$this->addFieldMapping('field_features:ignore_case')
			->defaultValue(TRUE);	
		
		$this->addFieldMapping('field_grape_varieties', '4')
			->sourceMigration('Grape_Varieties');
		$this->addFieldMapping('field_grape_varieties:source_type')
			->defaultValue('tid');			
		$this->addFieldMapping('field_grape_varieties:create_term')
			->defaultValue(TRUE);
		$this->addFieldMapping('field_grape_varieties:ignore_case')
			->defaultValue(TRUE);	
	}
	
	public function prepare($node, stdClass $row) 
	{
		//Start with retrieving the taxonomy term
		$categories = taxonomy_vocabulary_machine_name_load('products_categories');
		$terms = taxonomy_get_tree($categories->vid);
		
		foreach($terms as $term)
		{
			if($term->name == 'Wine')
			{
				$tid = $term->tid;
				$node->field_product_categories['und'][0]['tid'] = $tid;
			}
		}

		//Let's do the supplier only, as we can get the country info from the supplier.
		$supplier = $row->field_supplier[0];
		$db_result = db_query('SELECT m.destid1
		FROM {migrate_map_supplier} m WHERE m.sourceid1 = :sid', array(':sid' => $supplier));

		foreach($db_result as $record)
			$node->field_supplier['und'][0]['target_id'] = $record->destid1;
			
	}
}


// Product migration
class OliveOilProductMigration extends ExampleNodeMigration {

	public function __construct(array $arguments) 
	{
		parent::__construct($arguments);
		
		$this->addSimpleMappings(array('field_country' , 'field_supplier'));
		
		$this->addFieldMapping( 'field_illustration' , 'field_illustration')
	    	->sourceMigration('Files');		
		$this->addFieldMapping('field_illustration:file_class')
			     ->defaultValue('MigrateFileFid');
			
		$this->addUnmigratedSources(array('field_illustration:list', 'field_illustration:data','field_notes:format'));
		
		$this->addUnmigratedDestinations(array('field_illustration:language','field_illustration:alt','field_illustration:title'));
		$this->addUnmigratedDestinations(array('field_product_categories','field_product_categories:source_type',
		'field_product_categories:create_term','field_product_categories:ignore_case'));
		$this->addUnmigratedDestinations(array('field_grape_varieties','field_grape_varieties:source_type',
		'field_grape_varieties:create_term','field_grape_varieties:ignore_case'));
		$this->addUnmigratedDestinations(array('field_description_a:language','field_description_title_a:language',
		'field_description_title_b:language','field_description_b:language','field_description_title_c:language',
		'field_description_c:language'));
		$this->addUnmigratedDestinations(array('field_description_title_b','field_description_b','field_description_title_c',
		'field_description_c'));

		$this->addFieldMapping( 'field_description_title_a')
			->defaultValue('Notes');
		$this->addFieldMapping( 'field_description_a' , 'field_notes');
			
		// Taxonomy Vocabularies . Note that we map migrated terms by the vocabulary ID.
		$this->addFieldMapping('field_features', '8')
			->sourceMigration('Features');
		$this->addFieldMapping('field_features:source_type')
			->defaultValue('tid');			
		$this->addFieldMapping('field_features:create_term')
			->defaultValue(TRUE);
		$this->addFieldMapping('field_features:ignore_case')
			->defaultValue(TRUE);
		
		$this->addUnmigratedDestinations(array('field_supplier_name', 'field_supplier_name:source_type',
		'field_supplier_name:create_term','field_supplier_name:ignore_case'));
			
	}

	public function prepare($node, stdClass $row) 
	{
		//Start with retrieving the taxonomy term
		$categories = taxonomy_vocabulary_machine_name_load('products_categories');
		$terms = taxonomy_get_tree($categories->vid);

		foreach($terms as $term)
		{
			if($term->name == 'Olive Oil')
			{
				$tid = $term->tid;
				$node->field_product_categories['und'][0]['tid'] = $tid;
			}
		}
		
		//Let's do the supplier only, as we can get the country info from the supplier.
		$supplier = $row->field_supplier[0];
		$db_result = db_query('SELECT m.destid1
		FROM {migrate_map_supplier} m WHERE m.sourceid1 = :sid', array(':sid' => $supplier));

		foreach($db_result as $record)
			$node->field_supplier['und'][0]['target_id'] = $record->destid1;
		
		//Supplier taxonomy
		$suppliers = taxonomy_vocabulary_machine_name_load('suppliers');
		$names = taxonomy_get_tree($suppliers->vid);
		
		$supplier_node = node_load($record->destid1);
		$s_name = $supplier_node->title;
		
		foreach($names as $obj)
		{
			if($s_name == $obj->name)
			{
				$node->field_supplier_name['und'][0]['tid'] == $obj->tid;
				$node->field_supplier_name['und'][0]['entity_id'] == $node->nid;
				$node->field_supplier_name['und'][0]['entity_type'] == 'node';
				$node->field_supplier_name['und'][0]['bundle'] == 'product';
				$node->field_supplier_name['und'][0]['language'] == $node->language;
				dsm($node);
			}
		}
	}
}







