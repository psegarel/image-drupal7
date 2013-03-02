<?php

// Product migration
class ProductMigration extends ExampleNodeMigration {

	public function __construct(array $arguments) 
	{
		parent::__construct($arguments);
		
		$this->addFieldMapping( 'field_illustration' , 'field_illustration')
	    	->sourceMigration('Files');		
		$this->addFieldMapping('field_illustration:file_class')
			     ->defaultValue('MigrateFileFid');
			
		// $this->addFieldMapping( NULL , 'field_illustration:list')
		// 	->description('DNM');
		// $this->addFieldMapping( NULL , 'field_illustration:data')
		// 	->description('DNM');
		// $this->addFieldMapping('field_illustration:language')
		// 	->description('DNM');
			
		// $this->addFieldMapping('field_illustration:alt')->defaultValue('')
		// 	->description(t('Get values from unserialised data field'))
		// 	->issueGroup(t('Development Issues'));
		// $this->addFieldMapping('field_illustration:title')->defaultValue('')
		// 	->description(t('Get values from unserialised data field'))
		// 	->issueGroup(t('Development Issues'));
			
		$this->addSimpleMappings(array('field_notes', 'field_tasting_notes' , 'field_country' , 'field_supplier' , 
		'field_product_data', 'field_mono_unsaturated', 'field_poly_unsaturated', 'field_saturated_acids' ));
		
		$this->addUnmigratedSources(array('field_notes:format', 'field_tasting_notes:format', 'field_product_data:format',
		'field_mono_unsaturated:format', 'field_poly_unsaturated:format', 'field_saturated_acids:format' ));
		$this->addUnmigratedDestinations(array('field_notes:language' , 'field_tasting_notes:language', 'field_product_data:language',
		'field_mono_unsaturated:language', 'field_poly_unsaturated:language', 'field_saturated_acids:language'));
		
		// Taxonomy Vocabularies . Note that we map migrated terms by the vocabulary ID.
		$this->addFieldMapping('field_features', '8')
			->sourceMigration('Features');
		$this->addFieldMapping('field_features:source_type')
			->defaultValue('tid');			
		$this->addFieldMapping('field_features:create_term')
			->defaultValue(TRUE);
		$this->addFieldMapping('field_features:ignore_case')
			->defaultValue(TRUE);	
		
		$this->addFieldMapping('field_product_categories', '9')
			->sourceMigration('Products_Categories');
		$this->addFieldMapping('field_product_categories:source_type')
			->defaultValue('tid');			
		$this->addFieldMapping('field_product_categories:create_term')
			->defaultValue(TRUE);
		$this->addFieldMapping('field_product_categories:ignore_case')
			->defaultValue(TRUE);	
	}
}