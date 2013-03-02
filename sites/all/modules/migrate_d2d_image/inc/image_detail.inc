<?php

// Image Detail migration
class ImageDetailMigration extends ExampleNodeMigration {

	public function __construct(array $arguments) 
	{
		parent::__construct($arguments);
		
		$this->addFieldMapping( 'field_illustration' , 'field_illustration')
	    	->sourceMigration('Files');		
		$this->addFieldMapping('field_illustration:file_class')
			     ->defaultValue('MigrateFileFid');
		$this->addFieldMapping( NULL , 'field_illustration:list')
			->description('DNM');
		$this->addFieldMapping( NULL , 'field_illustration:data')
			->description('DNM');
		$this->addFieldMapping('field_illustration:language')
			->description('DNM');
			
		$this->addFieldMapping('field_illustration:alt')->defaultValue('')
			->description(t('Get values from unserialised data field'))
			->issueGroup(t('Development Issues'));
		$this->addFieldMapping('field_illustration:title')->defaultValue('')
			->description(t('Get values from unserialised data field'))
			->issueGroup(t('Development Issues'));
	}
}