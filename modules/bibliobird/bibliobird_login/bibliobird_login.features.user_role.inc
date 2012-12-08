<?php
/**
 * @file
 * bibliobird_login.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function bibliobird_login_user_default_roles() {
  $roles = array();

  // Exported role: unverified user.
  $roles['unverified user'] = array(
    'name' => 'unverified user',
    'weight' => '0',
  );

  return $roles;
}
