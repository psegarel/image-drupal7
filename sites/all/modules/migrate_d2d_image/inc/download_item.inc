<?php

// Download Item migration
class DownloadItemMigration extends ExampleNodeMigration {

	public function __construct(array $arguments) 
	{
		parent::__construct($arguments);
		
		$this->addSimpleMappings(array('field_description'));
		$this->addFieldMapping( 'field_download' , 'field_download')
	    	->sourceMigration('Files');
		$this->addFieldMapping('field_download:file_class')
			     ->defaultValue('MigrateFileFid');
		
		$this->addUnmigratedSources(array('field_download:list' , 'field_download:data'), 
		t('Do Not Migrate'));
		$this->addUnmigratedDestinations(array('field_download:language' , 'field_download:description', 'field_download:display',
		'field_description:language'), 
		t('Do Not Migrate'));
	}
}