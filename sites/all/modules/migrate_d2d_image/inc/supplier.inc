<?php

// Product migration
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

		$this->addSimpleMappings(array('field_country'));

		$this->addUnmigratedSources(array('field_illustration_large:list', 'field_illustration_large:data' , 
		'field_logo:list' , 'field_logo:data'));	

		$this->addUnmigratedDestinations(array('field_illustration:language' , 'field_logo:language' , 'field_logo:alt',
		'field_logo:title', 'field_illustration:alt', 'field_illustration:title'));	
	}
}