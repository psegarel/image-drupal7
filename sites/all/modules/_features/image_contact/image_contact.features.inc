<?php
/**
 * @file
 * image_contact.features.inc
 */

/**
 * Implements hook_views_api().
 */
function image_contact_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function image_contact_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
