<?php

/**
 * Image-specific mappings and handling.
 */
class CountryMigration extends ImageNodeMigration 
{
	
	public function __construct(array $arguments) 
	{

		parent::__construct($arguments);
		
		$this->addUnmigratedSources(array('field_olive_oil','field_wine','field_other','field_illustration:list',
		'field_illustration:data','format'));
		
		$this->addUnmigratedDestinations(array('field_illustration:language','field_illustration:alt',
		'field_illustration:title'));
		
		$this->removeFieldMapping('body:format' , NULL);
		
		$this->addFieldMapping('body:format')
			->defaultValue('full_html');

		$this->addFieldMapping( 'field_illustration' , 'field_illustration')
			->sourceMigration('Files');
		$this->addFieldMapping('field_illustration:file_class')
			     ->defaultValue('MigrateFileFid');
		$this->addFieldMapping('field_illustration:preserve_files')
			     ->defaultValue(TRUE);
		
		$this->addFieldMapping('field_country', NULL);
		$this->addFieldMapping('field_country:source_type')
			->defaultValue('tid');			
		$this->addFieldMapping('field_country:create_term')
			->defaultValue(TRUE);
		$this->addFieldMapping('field_country:ignore_case')
			->defaultValue(TRUE);			
	}
	
	public function prepare($node, stdClass $row) 
	{
		$olive_oil = $row->field_olive_oil;
		$wine = $row->field_wine;
		$other = $row->field_other;
		
		if($olive_oil != NULL)
			$node->body['und'][0]['value']  = '<div class="field-title">Olive Oil</div> '.$olive_oil;
		if($wine != NULL)
			$node->body['und'][0]['value'] .= '<div class="field-title">Wine</div> '.$wine;
		if($other != NULL)
			$node->body['und'][0]['value'] .= '<div class="field-title">Other Products</div> '.$other;
	
	}
}