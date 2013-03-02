<?php

// News migration
class NewsMigration extends ExampleNodeMigration {

	public function __construct(array $arguments) 
	{
		parent::__construct($arguments);
		
		$this->addFieldMapping( 'field_introduction' , 'field_teaser');
		$this->addFieldMapping( NULL , 'field_teaser:format')
			->description('DNM');	
		$this->addFieldMapping('field_introduction:language')
			->description('DNM');
			
		$this->addFieldMapping('field_gallery_image', 'field_gallery_image')
		         ->sourceMigration('Files');
	    $this->addFieldMapping('field_gallery_image:file_class')
	         ->defaultValue('MigrateFileFid');
	
		$this->addUnmigratedSources(array('field_gallery_image:list', 'field_gallery_image:data'));
		$this->addUnmigratedDestinations(array('field_gallery_image:alt', 'field_gallery_image:title',
		'field_gallery_image:language'));
	}
}