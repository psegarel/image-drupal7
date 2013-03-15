<?php
/**
 * @file
 * is_layout.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function is_layout_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description_a|node|product|form';
  $field_group->group_name = 'group_description_a';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description A',
    'weight' => '10',
    'children' => array(
      0 => 'field_description_a',
      1 => 'field_description_title_a',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Description A',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_description_a|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description_b|node|product|form';
  $field_group->group_name = 'group_description_b';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description B',
    'weight' => '11',
    'children' => array(
      0 => 'field_description_title_b',
      1 => 'field_description_b',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_description_b|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description_c|node|product|form';
  $field_group->group_name = 'group_description_c';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description C',
    'weight' => '12',
    'children' => array(
      0 => 'field_description_title_c',
      1 => 'field_description_c',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_description_c|node|product|form'] = $field_group;

  return $export;
}
