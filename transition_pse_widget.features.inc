<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function transition_pse_widget_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function transition_pse_widget_node_info() {
  $items = array(
    'project_pse' => array(
      'name' => t('PSE project submission'),
      'module' => 'features',
      'description' => t('A temporary holder of a project submitted by users of the PSE.'),
      'has_title' => '1',
      'title_label' => t('Project title'),
      'has_body' => '1',
      'body_label' => t('What is this project about?'),
      'min_word_count' => '10',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_rules_defaults().
 */
function transition_pse_widget_rules_defaults() {
  return array(
    'rules' => array(
      'rules_pse_add_widget_to_user' => array(
        '#type' => 'rule',
        '#set' => 'event_user_insert',
        '#label' => 'PSE: Add \'widget\' to user',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'PSE',
          'transition_pse_widget' => 'transition_pse_widget',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'condition',
            '#settings' => array(
              'code' => 'return (arg(0) == \'pse\');',
              'vars' => array(),
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'code' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#name' => 'rules_condition_custom_php',
            '#info' => array(
              'label' => 'Execute custom PHP code',
              'module' => 'PHP',
              'eval input' => array(
                '0' => 'code',
              ),
            ),
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#info' => array(
              'label' => 'Add user role',
              'arguments' => array(
                'user' => array(
                  'type' => 'user',
                  'label' => 'User whos roles should be changed',
                ),
              ),
              'module' => 'User',
            ),
            '#name' => 'rules_action_user_addrole',
            '#settings' => array(
              'roles' => array(
                '0' => 17,
              ),
              '#argument map' => array(
                'user' => 'account',
              ),
            ),
            '#type' => 'action',
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}

/**
 * Implementation of hook_views_api().
 */
function transition_pse_widget_views_api() {
  return array(
    'api' => '2',
  );
}
