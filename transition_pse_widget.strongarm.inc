<?php

/**
 * Implementation of hook_strongarm().
 */
function transition_pse_widget_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_project_pse';
  $strongarm->value = 0;
  $export['comment_anonymous_project_pse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_project_pse';
  $strongarm->value = '3';
  $export['comment_controls_project_pse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_project_pse';
  $strongarm->value = '4';
  $export['comment_default_mode_project_pse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_project_pse';
  $strongarm->value = '1';
  $export['comment_default_order_project_pse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_project_pse';
  $strongarm->value = '50';
  $export['comment_default_per_page_project_pse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_project_pse';
  $strongarm->value = '0';
  $export['comment_form_location_project_pse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_project_pse';
  $strongarm->value = '1';
  $export['comment_preview_project_pse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_project_pse';
  $strongarm->value = '0';
  $export['comment_project_pse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_project_pse';
  $strongarm->value = '1';
  $export['comment_subject_field_project_pse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_project_pse';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-4',
    'revision_information' => '3',
    'author' => '2',
    'options' => '4',
    'comment_settings' => '9',
    'menu' => '1',
    'path' => '8',
    'locations' => '-3',
    'path_redirect' => '6',
    'xmlsitemap' => '7',
    'custom_breadcrumbs' => '5',
  );
  $export['content_extra_weights_project_pse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_project_pse';
  $strongarm->value = '0';
  $export['language_content_type_project_pse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_project_pse';
  $strongarm->value = '1';
  $export['location_defaultnum_project_pse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_project_pse';
  $strongarm->value = '1';
  $export['location_maxnum_project_pse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_project_pse';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '1',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '-3',
      'collapsible' => 0,
      'collapsed' => 0,
      'fields' => array(
        'name' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '2',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '1',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '2',
          'default' => 'uk',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '0',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '-3',
      'hide' => array(
        'name' => 'name',
        'street' => 'street',
        'additional' => 'additional',
        'province' => 'province',
        'country' => 'country',
        'locpick' => 'locpick',
        'map_link' => 'map_link',
        'coords' => 'coords',
        'city' => 0,
        'postal_code' => 0,
        'province_name' => 0,
        'country_name' => 0,
      ),
      'teaser' => 0,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'none',
    ),
  );
  $export['location_settings_node_project_pse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_project_pse';
  $strongarm->value = array();
  $export['node_options_project_pse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_project_pse_pattern';
  $strongarm->value = 'submissions/[title-raw]';
  $export['pathauto_node_project_pse_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_project_pse';
  $strongarm->value = '0';
  $export['upload_project_pse'] = $strongarm;

  return $export;
}
