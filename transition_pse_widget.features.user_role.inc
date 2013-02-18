<?php

/**
 * Implementation of hook_user_default_roles().
 */
function transition_pse_widget_user_default_roles() {
  $roles = array();

  // Exported role: widget admin
  $roles['widget admin'] = array(
    'name' => 'widget admin',
  );

  return $roles;
}
