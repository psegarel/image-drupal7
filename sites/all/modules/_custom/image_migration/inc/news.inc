<?php

/**
 * Image-specific mappings and handling.
 */
class NewsMigration extends ImageNodeMigration 
{
	
	public function __construct(array $arguments) 
	{

		parent::__construct($arguments);
		
		$this->addFieldMapping( 'field_gallery_image' , 'field_gallery_image')
	    	->sourceMigration('Files');
		$this->addFieldMapping('field_gallery_image:file_class')
			     ->defaultValue('MigrateFileFid');
		$this->addFieldMapping('field_gallery_image:preserve_files')
			     ->defaultValue(TRUE);
			
		$this->addFieldMapping('field_introduction', 'field_teaser');

		$this->addUnmigratedSources(array('field_teaser:format', 'field_gallery_image:list', 'field_gallery_image:data'));

		$this->addUnmigratedDestinations(array('field_introduction:language', 'field_gallery_image:language', 
		'field_gallery_image:alt', 'field_gallery_image:title'));		
	}

	public function prepare($node, stdClass $row) 
	{
	}	
}