<?php
/**
 * @file
 * hr_operations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hr_operations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hr_operations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Operations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'views-catgroup';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_operation_region',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_operation_region_target_id']['id'] = 'field_operation_region_target_id';
  $handler->display->display_options['relationships']['field_operation_region_target_id']['table'] = 'field_data_field_operation_region';
  $handler->display->display_options['relationships']['field_operation_region_target_id']['field'] = 'field_operation_region_target_id';
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website_1']['id'] = 'field_website_1';
  $handler->display->display_options['fields']['field_website_1']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website_1']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website_1']['relationship'] = 'field_operation_region_target_id';
  $handler->display->display_options['fields']['field_website_1']['label'] = '';
  $handler->display->display_options['fields']['field_website_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website_1']['type'] = 'link_absolute';
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_operation_region']['id'] = 'field_operation_region';
  $handler->display->display_options['fields']['field_operation_region']['table'] = 'field_data_field_operation_region';
  $handler->display->display_options['fields']['field_operation_region']['field'] = 'field_operation_region';
  $handler->display->display_options['fields']['field_operation_region']['label'] = '';
  $handler->display->display_options['fields']['field_operation_region']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_operation_region']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_operation_region']['alter']['text'] = '<a href="[field_website_1]">[field_operation_region]</a>';
  $handler->display->display_options['fields']['field_operation_region']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_operation_region']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_operation_region']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['path'] = '[field_website]';
  $handler->display->display_options['fields']['title_field']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'hr_operation' => 'hr_operation',
  );
  /* Filter criterion: Content: Type (field_operation_type) */
  $handler->display->display_options['filters']['field_operation_type_value']['id'] = 'field_operation_type_value';
  $handler->display->display_options['filters']['field_operation_type_value']['table'] = 'field_data_field_operation_type';
  $handler->display->display_options['filters']['field_operation_type_value']['field'] = 'field_operation_type_value';
  $handler->display->display_options['filters']['field_operation_type_value']['value'] = array(
    'country' => 'country',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'operations';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Operations';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['hr_operations'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_operation_region'),
    t('<a href="[field_website_1]">[field_operation_region]</a>'),
    t('[path]'),
    t('Page'),
  );
  $export['hr_operations'] = $view;

  return $export;
}
