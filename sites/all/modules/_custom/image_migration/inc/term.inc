<?php

class TermMigration extends DrupalTerm6Migration
{
	public function __construct(array $arguments) 
	{
    	parent::__construct($arguments);
	}
	
	/**
	* Implementation of Migration::prepareRow().
	*
	* @param $row
	*/
	public function prepareRow($row) 
	{
		if (parent::prepareRow($row) === FALSE) {
		return FALSE; }
	}

}