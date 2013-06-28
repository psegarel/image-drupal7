<?php

class ProductMigration extends ImageNodeMigration
{
	public function __construct(array $arguments) 
	{
		parent::__construct($arguments);

		$this->removeFieldMapping('body:summary', 'teaser');
				
		$this->addFieldMapping('body:summary', 'field_notes');
		$this->addFieldMapping( 'field_illustration' , 'field_illustration')
	    	->sourceMigration('Files');
		$this->addFieldMapping('field_illustration:file_class')
			     ->defaultValue('MigrateFileFid');
		$this->addFieldMapping('field_illustration:preserve_files')
			     ->defaultValue(TRUE);
		
		$this->addUnmigratedSources(array('field_illustration:list', 'field_illustration:data',
		'field_notes:format', 'field_tasting_notes:format', 'field_product_data:format', 'teaser'));
		$this->addUnmigratedDestinations(array('field_illustration:language', 'field_illustration:alt',
		'field_illustration:title'));	

		$this->addFieldMapping('field_features', '8')
			->sourceMigration('features');
		$this->addFieldMapping('field_features:source_type')
			->defaultValue('tid');			
		$this->addFieldMapping('field_features:create_term')
			->defaultValue(TRUE);
		$this->addFieldMapping('field_features:ignore_case')
			->defaultValue(TRUE);
			
		$this->addFieldMapping('field_supplier', NULL);
		$this->addFieldMapping('field_supplier:source_type')
			->defaultValue('tid');			
		$this->addFieldMapping('field_supplier:create_term')
			->defaultValue(TRUE);
		$this->addFieldMapping('field_supplier:ignore_case')
			->defaultValue(TRUE);
			
		$this->addFieldMapping('field_product_category', NULL);
		$this->addFieldMapping('field_product_category:source_type')
			->defaultValue('tid');			
		$this->addFieldMapping('field_product_category:create_term')
			->defaultValue(TRUE);
		$this->addFieldMapping('field_product_category:ignore_case')
			->defaultValue(TRUE);	
			
					
	}
			
	public function prepare($node, stdClass $row) 
	{	
		// Supplier taxonomy term
		$voc = taxonomy_vocabulary_machine_name_load('suppliers');
		$tree = taxonomy_get_tree($voc->vid);
		
		if(isset($row->field_supplier))
		{
			// We need to get the migrated value field_supplier
			$db_result = db_query('SELECT m.destid1
				FROM {migrate_map_supplier} m WHERE m.sourceid1 = :sid', array(':sid' => $row->field_supplier[0]));
			foreach($db_result as $record)
				$supplier_nid = $record->destid1;
					
			if($supplier_nid)
			{
				$supplier = node_load($supplier_nid);
				if($supplier)
				{
					foreach($tree as $t)
					{
						if($supplier->title == $t->name)
						{
							$node->field_supplier['und'][0]['tid'] = $t->tid;
						}
					}
				}
			}
		}
		
		// Product Category taxonomy mapping
		$categories = taxonomy_vocabulary_machine_name_load('products');
		$terms = taxonomy_get_tree($categories->vid);
		
		// Olive Oil specific fields
		if($this->arguments['machine_name'] == 'OliveOil')
		{
			//Product Category			
			foreach($terms as $term)
			{
				if($term->name == 'Olive Oil')
				{
					$node->field_product_category['und'][0]['tid'] = $term->tid;
					break;
				}
			}
			
			// Poly, Mono Unsaturated & Saturated Acids
			if($row->field_poly_unsaturated != NULL)
				$node->body['und'][0]['value']  = $row->field_poly_unsaturated;

			if($row->field_mono_unsaturated  != NULL)
				$node->body['und'][0]['value'] .= $row->field_mono_unsaturated ;

			if($row->field_saturated_acids  != NULL)
				$node->body['und'][0]['value'] .= $row->field_saturated_acids ;
				
			$node->body['und'][0]['format'] = 'full_html';
		
		// Wine specific fields	
		}elseif($this->arguments['machine_name'] == 'Wine')
		{
			//Product Category
			foreach($terms as $term)
			{
				if($term->name == 'Wine')
				{
					$node->field_product_category['und'][0]['tid'] = $term->tid;
					break;
				}
			}
			
			// Tasting Notes
			if($row->field_tasting_notes != NULL && !is_array($row->field_tasting_notes))
			{
				$node->body['und'][0]['value']  .= '<div class="field_title">Tasting Notes</div>
				<div class="content">'.$row->field_tasting_notes.'</div>';
				
			}elseif(is_array($row->field_tasting_notes)){
				$node->body['und'][0]['value']  .= '<div class="field_title">Tasting Notes</div>
				<div class="content">'.$row->field_tasting_notes[0].'</div>';
			}
			
			// Product Data
			if($row->field_product_data != NULL && !is_array($row->field_product_data))
			{
				$node->body['und'][0]['value']  .= '<div class="field_title">Product Data</div>
				<div class="content">'.$row->field_product_data.'</div>';
					
			}elseif(is_array($row->field_product_data)){
				$node->body['und'][0]['value']  .= '<div class="field_title">Product Data</div>
				<div class="content">'.$row->field_product_data[0].'</div>';
			}
			$node->body['und'][0]['format'] = 'full_html';	
		}
	}	
}

class WineMigration extends ProductMigration
{
	public function __construct(array $arguments) 
	{
		parent::__construct($arguments);

		$this->addFieldMapping('field_grape_varieties', '4')
			->sourceMigration('GrapeVarieties');
		$this->addFieldMapping('field_grape_varieties:source_type')
			->defaultValue('tid');			
		$this->addFieldMapping('field_grape_varieties:create_term')
			->defaultValue(TRUE);
		$this->addFieldMapping('field_grape_varieties:ignore_case')
			->defaultValue(TRUE);
	}	
}

class OliveOilMigration extends ProductMigration
{
	public function __construct(array $arguments) 
	{
		parent::__construct($arguments);
		
		$this->addUnmigratedDestinations(array('field_grape_varieties', 'field_grape_varieties:source_type',
		'field_grape_varieties:create_term', 'field_grape_varieties:ignore_case'));
		
		$this->removeFieldMapping( NULL , 'field_tasting_notes:format');
	}
}