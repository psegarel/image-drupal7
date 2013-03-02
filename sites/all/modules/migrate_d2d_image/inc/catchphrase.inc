<?php

// Catchphrase migration
class CatchphraseMigration extends ExampleNodeMigration {

	public function __construct(array $arguments) 
	{
		parent::__construct($arguments);

		$this->removeFieldMapping( 'body' , 'body');

		$this->addFieldMapping('field_weight', 'field_weight');
		$this->addFieldMapping('body', 'field_catchphrase');

		$this->addFieldMapping( NULL, 'body')
	         ->description('DNM');

	}
}