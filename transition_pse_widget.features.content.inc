<?php

/**
 * Implementation of hook_content_default_fields().
 */
function transition_pse_widget_content_default_fields() {
  $fields = array();

  // Exported field: field_project_org_type
  $fields['project_pse-field_project_org_type'] = array(
    'field_name' => 'field_project_org_type',
    'type_name' => 'project_pse',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Transition|Transition project
Other|Not a Transition project',
    'allowed_values_php' => '',
    'widget' => array(
      'mccr_width' => '1',
      'mccr_row-major' => 0,
      'mccr_indent' => '0',
      'mccr_caption' => '',
      'mccr_column-heading' => '',
      'mccr_row-heading' => '',
      'default_value' => array(
        '0' => array(
          'value' => 'Transition',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Is a Transition group project, or other?',
      'weight' => '-2',
      'description' => 'Is this project by a group relating to a Transition initiative, or is it by another group or organisation?',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_submission_initiative
  $fields['project_pse-field_submission_initiative'] = array(
    'field_name' => 'field_submission_initiative',
    'type_name' => 'project_pse',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'initiative_profile' => 'initiative_profile',
      'blog' => 0,
      'initiative_event' => 0,
      'initiative_group' => 0,
      'movement_news' => 0,
      'feed' => 0,
      'feed_item' => 0,
      'forum' => 0,
      'page_group' => 0,
      'imported_blogs' => 0,
      'imported_blogs_parent' => 0,
      'ingredient' => 0,
      'initiative_event_external' => 0,
      'initiative_hub_profile' => 0,
      'project_pse' => 0,
      'page' => 0,
      'panel' => 0,
      'imported_event' => 0,
      'imported_events_parent' => 0,
      'project_profile' => 0,
      'resource' => 0,
      'slide' => 0,
      'blog_social' => 0,
      'stage' => 0,
      'topic' => 0,
      'tool' => 0,
      'event' => 0,
      'network_news' => 0,
      'profile' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_submission_initiative][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Related initiative',
      'weight' => 0,
      'description' => 'The initiative this submission is related to, probably because the widget is on their website.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_submission_webmaster
  $fields['project_pse-field_submission_webmaster'] = array(
    'field_name' => 'field_submission_webmaster',
    'type_name' => 'project_pse',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
      '11' => 0,
      '12' => 0,
      '10' => 0,
      '8' => 0,
      '13' => 0,
      '15' => 0,
      '9' => 0,
      '3' => 0,
      '19' => 0,
      '5' => 0,
      '4' => 0,
      '16' => 0,
      '7' => 0,
      '17' => 0,
      '18' => 0,
    ),
    'referenceable_status' => '',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_submission_webmaster][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Webmaster user',
      'weight' => '-1',
      'description' => 'The webmaster to be notified and who will moderate this submission.',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Is a Transition group project, or other?');
  t('Related initiative');
  t('Webmaster user');

  return $fields;
}
