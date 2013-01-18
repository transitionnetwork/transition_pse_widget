<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function transition_pse_widget_user_default_permissions() {
  $permissions = array();

  // Exported permission: get widget code
  $permissions['get widget code'] = array(
    'name' => 'get widget code',
    'roles' => array(
      '0' => 'site administrator',
      '1' => 'widget admin',
    ),
  );

  // Exported permission: view submissions in moderation
  $permissions['view submissions in moderation'] = array(
    'name' => 'view submissions in moderation',
    'roles' => array(
      '0' => 'site administrator',
      '1' => 'site editor',
      '2' => 'widget admin',
    ),
  );

  return $permissions;
}
