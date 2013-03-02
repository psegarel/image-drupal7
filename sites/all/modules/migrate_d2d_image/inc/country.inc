<?php

// Country migration
class CountryMigration extends ExampleNodeMigration {

	public function __construct(array $arguments) 
	{
		parent::__construct($arguments);
		
		$this->addSimpleMappings(array('field_olive_oil', 'field_wine', 'field_other'));
		
		$this->addFieldMapping( 'field_illustration' , 'field_illustration')
	    	->sourceMigration('Files');		
		$this->addFieldMapping('field_illustration:file_class')
			     ->defaultValue('MigrateFileFid');
		$this->addFieldMapping( NULL , 'field_illustration:list')
			->description('DNM');
		$this->addFieldMapping( NULL , 'field_illustration:data')
			->description('DNM');
		$this->addFieldMapping('field_illustration:alt')->defaultValue('')
			->description(t('Get values from unserialised data field'))
			->issueGroup(t('Development Issues'));
		$this->addFieldMapping('field_illustration:title')->defaultValue('')
			->description(t('Get values from unserialised data field'))
			->issueGroup(t('Development Issues'));
			
		$this->addUnmigratedDestinations(array('field_olive_oil:language', 'field_other:language',
		'field_wine:language' , 'field_illustration:language'), 
		t('Do Not Migrate'));
	}
}