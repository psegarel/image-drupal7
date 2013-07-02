<?php
/**
 * @file
 * image_header.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function image_header_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'illustrations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Illustrations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Illustrations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Illustration */
  $handler->display->display_options['fields']['field_illustration']['id'] = 'field_illustration';
  $handler->display->display_options['fields']['field_illustration']['table'] = 'field_data_field_illustration';
  $handler->display->display_options['fields']['field_illustration']['field'] = 'field_illustration';
  $handler->display->display_options['fields']['field_illustration']['label'] = '';
  $handler->display->display_options['fields']['field_illustration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_illustration']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_illustration']['settings'] = array(
    'image_style' => 'header_adaptive',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_detail' => 'image_detail',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '1';

  /* Display: Grape pickers */
  $handler = $view->new_display('block', 'Grape pickers', 'block');
  $export['illustrations'] = $view;

  return $export;
}
