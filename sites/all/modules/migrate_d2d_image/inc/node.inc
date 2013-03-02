<?php

/**
 * Common mappings for the Drupal 6 node migrations.
 */
abstract class ExampleNodeMigration extends DrupalNode6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('Patrick Segarel', 'contact@patrick-segarel.com', t('Developer')),
    );
	
	$this->removeFieldMapping('pathauto');
  }
}