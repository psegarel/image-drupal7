<?php

class SupplierMigration extends ImageNodeMigration
{
	public function __construct(array $arguments) 
	{
		parent::__construct($arguments);

		$this->addFieldMapping( 'field_logo' , 'field_logo')
	    	->sourceMigration('Files');
		$this->addFieldMapping('field_logo:file_class')
			     ->defaultValue('MigrateFileFid');
		$this->addFieldMapping('field_logo:preserve_files')
			     ->defaultValue(TRUE);	
			

		$this->addFieldMapping( 'field_illustration' , 'field_illustration_large')
	    	->sourceMigration('Files');
		$this->addFieldMapping('field_illustration:file_class')
			     ->defaultValue('MigrateFileFid');	
		$this->addFieldMapping('field_illustration:preserve_files')
			     ->defaultValue(TRUE);
			
		// $this->addFieldMapping('field_supplier_country','field_country');
			
		$this->addUnmigratedSources(array('field_logo:list', 'field_logo:data', 'field_illustration_large:list',
		'field_illustration_large:data', 'field_country'));	
		
		$this->addUnmigratedDestinations(array('field_logo:language', 'field_logo:alt', 'field_logo:title',
		'field_country', 'field_illustration:language', 'field_illustration:alt', 'field_illustration:title',
		'field_country:source_type','field_country:create_term','field_country:ignore_case',
		'field_supplier','field_supplier:source_type','field_supplier:create_term','field_supplier:ignore_case'));		
	}
	
	public function prepare($node, stdClass $row) 
	{
		if(isset($row->field_country))
		{
			$legacy_country_nid = $row->field_country;
			$db_result = db_query('SELECT m.destid1
				FROM {migrate_map_country} m WHERE m.sourceid1 = :sid', array(':sid' => $legacy_country_nid));
				
			foreach($db_result as $record)
				$country_nid = $record->destid1;
				
			$node->field_supplier_country['und'][0]['target_id'] = $country_nid;
		}
	}	
}