<?php
/**
 * @file
 * bibliobird_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bibliobird_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'admin',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'user',
  );

  return $permissions;
}
