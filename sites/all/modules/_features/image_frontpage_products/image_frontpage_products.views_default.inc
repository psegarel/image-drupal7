<?php
/**
 * @file
 * image_frontpage_products.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function image_frontpage_products_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'product';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Product';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'grid-2 alpha';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Supplier';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'suppliers' => 'suppliers',
    'countries' => 0,
    'features' => 0,
    'grape_varieties' => 0,
    'products' => 0,
    'tags' => 0,
  );
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['fields']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid_1']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid_1']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid_1']['vocabularies'] = array(
    'products' => 'products',
    'countries' => 0,
    'features' => 0,
    'grape_varieties' => 0,
    'suppliers' => 0,
    'tags' => 0,
  );
  /* Field: Content: Illustration */
  $handler->display->display_options['fields']['field_illustration']['id'] = 'field_illustration';
  $handler->display->display_options['fields']['field_illustration']['table'] = 'field_data_field_illustration';
  $handler->display->display_options['fields']['field_illustration']['field'] = 'field_illustration';
  $handler->display->display_options['fields']['field_illustration']['label'] = '';
  $handler->display->display_options['fields']['field_illustration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_illustration']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_illustration']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'suppliers' => 'suppliers',
    'countries' => 0,
    'features' => 0,
    'grape_varieties' => 0,
    'products' => 0,
    'tags' => 0,
  );
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
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
    'product' => 'product',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Frontpage Products */
  $handler = $view->new_display('block', 'Frontpage Products', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Supplier';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'suppliers' => 'suppliers',
    'countries' => 0,
    'features' => 0,
    'grape_varieties' => 0,
    'products' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';

  /* Display: Products Page */
  $handler = $view->new_display('block', 'Products Page', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Ascending';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Descending';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'More Options',
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 0,
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
      ),
    ),
    'field_country_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_supplier_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_grape_varieties_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Illustration */
  $handler->display->display_options['fields']['field_illustration']['id'] = 'field_illustration';
  $handler->display->display_options['fields']['field_illustration']['table'] = 'field_data_field_illustration';
  $handler->display->display_options['fields']['field_illustration']['field'] = 'field_illustration';
  $handler->display->display_options['fields']['field_illustration']['label'] = '';
  $handler->display->display_options['fields']['field_illustration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_illustration']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_illustration']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'suppliers' => 'suppliers',
    'countries' => 0,
    'features' => 0,
    'grape_varieties' => 0,
    'products' => 0,
    'tags' => 0,
  );
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Country (field_country) */
  $handler->display->display_options['sorts']['field_country_tid']['id'] = 'field_country_tid';
  $handler->display->display_options['sorts']['field_country_tid']['table'] = 'field_data_field_country';
  $handler->display->display_options['sorts']['field_country_tid']['field'] = 'field_country_tid';
  $handler->display->display_options['sorts']['field_country_tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['sorts']['field_country_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_country_tid']['expose']['label'] = 'Country';
  /* Sort criterion: Content: Supplier (field_supplier) */
  $handler->display->display_options['sorts']['field_supplier_tid']['id'] = 'field_supplier_tid';
  $handler->display->display_options['sorts']['field_supplier_tid']['table'] = 'field_data_field_supplier';
  $handler->display->display_options['sorts']['field_supplier_tid']['field'] = 'field_supplier_tid';
  $handler->display->display_options['sorts']['field_supplier_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_supplier_tid']['expose']['label'] = 'Supplier';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Product Name';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'products' => 'products',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Field: Country (field_country) */
  $handler->display->display_options['filters']['field_country_tid']['id'] = 'field_country_tid';
  $handler->display->display_options['filters']['field_country_tid']['table'] = 'field_data_field_country';
  $handler->display->display_options['filters']['field_country_tid']['field'] = 'field_country_tid';
  $handler->display->display_options['filters']['field_country_tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['field_country_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_country_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_tid']['expose']['operator_id'] = 'field_country_tid_op';
  $handler->display->display_options['filters']['field_country_tid']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_country_tid']['expose']['operator'] = 'field_country_tid_op';
  $handler->display->display_options['filters']['field_country_tid']['expose']['identifier'] = 'field_country_tid';
  $handler->display->display_options['filters']['field_country_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    25 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['field_country_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_country_tid']['vocabulary'] = 'countries';
  /* Filter criterion: Content: Supplier (field_supplier) */
  $handler->display->display_options['filters']['field_supplier_tid']['id'] = 'field_supplier_tid';
  $handler->display->display_options['filters']['field_supplier_tid']['table'] = 'field_data_field_supplier';
  $handler->display->display_options['filters']['field_supplier_tid']['field'] = 'field_supplier_tid';
  $handler->display->display_options['filters']['field_supplier_tid']['value'] = '';
  $handler->display->display_options['filters']['field_supplier_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_supplier_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_supplier_tid']['expose']['operator_id'] = 'field_supplier_tid_op';
  $handler->display->display_options['filters']['field_supplier_tid']['expose']['label'] = 'Supplier';
  $handler->display->display_options['filters']['field_supplier_tid']['expose']['operator'] = 'field_supplier_tid_op';
  $handler->display->display_options['filters']['field_supplier_tid']['expose']['identifier'] = 'field_supplier_tid';
  $handler->display->display_options['filters']['field_supplier_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    25 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['field_supplier_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_supplier_tid']['vocabulary'] = 'suppliers';
  /* Filter criterion: Content: Grape Varieties (field_grape_varieties) */
  $handler->display->display_options['filters']['field_grape_varieties_tid']['id'] = 'field_grape_varieties_tid';
  $handler->display->display_options['filters']['field_grape_varieties_tid']['table'] = 'field_data_field_grape_varieties';
  $handler->display->display_options['filters']['field_grape_varieties_tid']['field'] = 'field_grape_varieties_tid';
  $handler->display->display_options['filters']['field_grape_varieties_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_grape_varieties_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_grape_varieties_tid']['expose']['operator_id'] = 'field_grape_varieties_tid_op';
  $handler->display->display_options['filters']['field_grape_varieties_tid']['expose']['label'] = 'Grape Variety';
  $handler->display->display_options['filters']['field_grape_varieties_tid']['expose']['operator'] = 'field_grape_varieties_tid_op';
  $handler->display->display_options['filters']['field_grape_varieties_tid']['expose']['identifier'] = 'field_grape_varieties_tid';
  $handler->display->display_options['filters']['field_grape_varieties_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    25 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['field_grape_varieties_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_grape_varieties_tid']['vocabulary'] = 'grape_varieties';

  /* Display: Single Product */
  $handler = $view->new_display('block', 'Single Product', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Illustration */
  $handler->display->display_options['fields']['field_illustration']['id'] = 'field_illustration';
  $handler->display->display_options['fields']['field_illustration']['table'] = 'field_data_field_illustration';
  $handler->display->display_options['fields']['field_illustration']['field'] = 'field_illustration';
  $handler->display->display_options['fields']['field_illustration']['label'] = '';
  $handler->display->display_options['fields']['field_illustration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_illustration']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_illustration']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'suppliers' => 'suppliers',
    'countries' => 0,
    'features' => 0,
    'grape_varieties' => 0,
    'products' => 0,
    'tags' => 0,
  );
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['product'] = $view;

  return $export;
}