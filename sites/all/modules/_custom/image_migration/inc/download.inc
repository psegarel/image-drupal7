<?php

/**
 * Image-specific mappings and handling.
 */
class DownloadMigration extends ImageNodeMigration 
{
	
	public function __construct(array $arguments) 
	{

		parent::__construct($arguments);
		
		$this->addFieldMapping( 'field_download' , 'field_download')
	    	->sourceMigration('Files');
		$this->addFieldMapping('field_download:file_class')
			     ->defaultValue('MigrateFileFid');
		$this->addFieldMapping('field_download:preserve_files')
			     ->defaultValue(TRUE);
		
		$this->addFieldMapping( 'field_description' , 'field_description');	
	}

	public function prepare($node, stdClass $row) 
	{
	}	
}