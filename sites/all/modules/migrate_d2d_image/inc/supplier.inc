<?php

// Supplier migration
class SupplierMigration extends ExampleNodeMigration {

	public function __construct(array $arguments) 
	{
		parent::__construct($arguments);
		
		$this->addFieldMapping( 'field_logo' , 'field_logo')
	    	->sourceMigration('Files');		
		$this->addFieldMapping('field_logo:file_class')
			     ->defaultValue('MigrateFileFid');	
			

		$this->addFieldMapping( 'field_illustration' , 'field_illustration_large')
	    	->sourceMigration('Files');		
		$this->addFieldMapping('field_illustration:file_class')
			     ->defaultValue('MigrateFileFid');	

		$this->addUnmigratedSources(array('field_illustration_large:list', 'field_illustration_large:data' , 
		'field_logo:list' , 'field_logo:data'));	

		$this->addUnmigratedDestinations(array('field_illustration:language' , 'field_logo:language' , 'field_logo:alt',
		'field_logo:title', 'field_illustration:alt', 'field_illustration:title'));	
	}
	
	public function prepare($node, stdClass $row) 
	{
		$country = $row->field_country[0];
		$db_result = db_query('SELECT m.destid1
		FROM {migrate_map_country} m WHERE m.sourceid1 = :sid', array(':sid' => $country));

		foreach($db_result as $record)
			$node->field_country['und'][0]['target_id'] = $record->destid1;
	}	
}