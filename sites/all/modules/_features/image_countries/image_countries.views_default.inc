<?php
/**
 * @file
 * image_countries.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function image_countries_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'country_terms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Country Terms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field: Country (field_country) */
  $handler->display->display_options['relationships']['field_country_tid']['id'] = 'field_country_tid';
  $handler->display->display_options['relationships']['field_country_tid']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_tid']['field'] = 'field_country_tid';
  $handler->display->display_options['relationships']['field_country_tid']['label'] = 'Country';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Contextual filter: Field: Country (field_country) */
  $handler->display->display_options['arguments']['field_country_tid']['id'] = 'field_country_tid';
  $handler->display->display_options['arguments']['field_country_tid']['table'] = 'field_data_field_country';
  $handler->display->display_options['arguments']['field_country_tid']['field'] = 'field_country_tid';
  $handler->display->display_options['arguments']['field_country_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_country_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_country_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_country_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'suppliers' => 'suppliers',
  );

  /* Display: Country Term */
  $handler = $view->new_display('block', 'Country Term', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_country']['element_class'] = 'country-title';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Term description (translated) */
  $handler->display->display_options['fields']['description_i18n']['id'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description_i18n']['field'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['relationship'] = 'field_country_tid';
  $handler->display->display_options['fields']['description_i18n']['label'] = '';
  $handler->display->display_options['fields']['description_i18n']['element_label_colon'] = FALSE;

  /* Display: Suppliers by Country */
  $handler = $view->new_display('block', 'Suppliers by Country', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Suppliers';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $export['country_terms'] = $view;

  return $export;
}
