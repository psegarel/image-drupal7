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

		$this->addFieldMapping( 'field_illustration' , 'field_illustration_large')
	    	->sourceMigration('Files');
		$this->addFieldMapping('field_illustration:file_class')
			     ->defaultValue('MigrateFileFid');	
			
		$this->addUnmigratedSources(array('field_logo:list', 'field_logo:data', 'field_illustration_large:list',
		'field_illustration_large:data', 'field_country'));	
		
		$this->addUnmigratedDestinations(array('field_logo:language', 'field_logo:alt', 'field_logo:title',
		'field_country', 'field_illustration:language', 'field_illustration:alt', 'field_illustration:title'));		
	}	
	
	public function prepare($node, stdClass $row) 
	{
		$suppliers = taxonomy_vocabulary_machine_name_load('suppliers');
		$terms = taxonomy_get_tree($suppliers->vid);
		
		foreach($terms as $term)
		{	
			if($term->name == $row->title)
			{
				dsm($term);
			}
	
		}	
	}
}