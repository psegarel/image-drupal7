<?php

/**
 * Common mappings for the Drupal 6 node migrations.
 */
abstract class ImageNodeMigration extends DrupalNode6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

	$this->removeFieldMapping('pathauto');
  }
}
