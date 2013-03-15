<?php

class ItemNodeMigration extends ExampleNodeMigration
{
	public function __construct(array $arguments) 
	{
		parent::__construct($arguments);	
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
				dsm($node);
			}
		}
	}	
}

// Item migration
class WineItemMigration extends ItemNodeMigration {

	public function __construct(array $arguments) 
	{
		parent::__construct($arguments);	
	}
}


// Item migration
class OliveOilItemMigration extends ItemNodeMigration {

	public function __construct(array $arguments) 
	{
		parent::__construct($arguments);
	}

}







