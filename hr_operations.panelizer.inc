<?php
/**
 * @file
 * hr_operations.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function hr_operations_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:hr_operation:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'hr_operation';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2a9f23a1-cbf4-4d36-b107-8abe22e6c984';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-80048686-26a9-4fcc-9a68-3b11fdd6ed55';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'og_group_subscribe',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_name' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '80048686-26a9-4fcc-9a68-3b11fdd6ed55';
    $display->content['new-80048686-26a9-4fcc-9a68-3b11fdd6ed55'] = $pane;
    $display->panels['top'][0] = 'new-80048686-26a9-4fcc-9a68-3b11fdd6ed55';
    $pane = new stdClass();
    $pane->pid = 'new-da5a9753-5710-4a0e-929f-bab1f19485e6';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'da5a9753-5710-4a0e-929f-bab1f19485e6';
    $display->content['new-da5a9753-5710-4a0e-929f-bab1f19485e6'] = $pane;
    $display->panels['top'][1] = 'new-da5a9753-5710-4a0e-929f-bab1f19485e6';
    $pane = new stdClass();
    $pane->pid = 'new-ba0fcd88-b751-46b8-a05f-2e7bb99888ef';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ba0fcd88-b751-46b8-a05f-2e7bb99888ef';
    $display->content['new-ba0fcd88-b751-46b8-a05f-2e7bb99888ef'] = $pane;
    $display->panels['top'][2] = 'new-ba0fcd88-b751-46b8-a05f-2e7bb99888ef';
    $pane = new stdClass();
    $pane->pid = 'new-fcf929b3-d72b-4e3d-ae65-124591f37b57';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_website';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'fcf929b3-d72b-4e3d-ae65-124591f37b57';
    $display->content['new-fcf929b3-d72b-4e3d-ae65-124591f37b57'] = $pane;
    $display->panels['top'][3] = 'new-fcf929b3-d72b-4e3d-ae65-124591f37b57';
    $pane = new stdClass();
    $pane->pid = 'new-06f05eab-031f-433a-b3f5-e49f0d7eb9b1';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_country';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '06f05eab-031f-433a-b3f5-e49f0d7eb9b1';
    $display->content['new-06f05eab-031f-433a-b3f5-e49f0d7eb9b1'] = $pane;
    $display->panels['top'][4] = 'new-06f05eab-031f-433a-b3f5-e49f0d7eb9b1';
    $pane = new stdClass();
    $pane->pid = 'new-d97af480-df5d-4c2b-a4dc-65916ed32de6';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_operation_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'd97af480-df5d-4c2b-a4dc-65916ed32de6';
    $display->content['new-d97af480-df5d-4c2b-a4dc-65916ed32de6'] = $pane;
    $display->panels['top'][5] = 'new-d97af480-df5d-4c2b-a4dc-65916ed32de6';
    $pane = new stdClass();
    $pane->pid = 'new-e0719e81-fd7e-4000-90f7-ae86f0764a67';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_operation_region';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'e0719e81-fd7e-4000-90f7-ae86f0764a67';
    $display->content['new-e0719e81-fd7e-4000-90f7-ae86f0764a67'] = $pane;
    $display->panels['top'][6] = 'new-e0719e81-fd7e-4000-90f7-ae86f0764a67';
    $pane = new stdClass();
    $pane->pid = 'new-05dc4326-059b-4d5f-925b-3590239c880f';
    $pane->panel = 'top';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '05dc4326-059b-4d5f-925b-3590239c880f';
    $display->content['new-05dc4326-059b-4d5f-925b-3590239c880f'] = $pane;
    $display->panels['top'][7] = 'new-05dc4326-059b-4d5f-925b-3590239c880f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-80048686-26a9-4fcc-9a68-3b11fdd6ed55';
  $panelizer->display = $display;
  $export['node:hr_operation:default:default'] = $panelizer;

  return $export;
}
