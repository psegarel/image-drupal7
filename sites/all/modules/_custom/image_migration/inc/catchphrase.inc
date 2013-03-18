<?php

/**
 * Image-specific mappings and handling.
 */
class CatchphraseMigration extends ImageNodeMigration 
{
	
	public function __construct(array $arguments) 
	{
		parent::__construct($arguments);
		
		$this->removeFieldMapping('body', 'body');
		
		$this->addFieldMapping('body', 'field_catchphrase');
		$this->addUnmigratedSources(array('body' , 'field_weight'));	
		$this->addUnmigratedDestinations(array('field_weight'));	
	}
}