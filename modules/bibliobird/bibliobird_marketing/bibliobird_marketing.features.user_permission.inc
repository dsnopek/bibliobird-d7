<?php
/**
 * @file
 * bibliobird_marketing.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bibliobird_marketing_user_default_permissions() {
  $permissions = array();

  // Exported permission: create site_update content.
  $permissions['create site_update content'] = array(
    'name' => 'create site_update content',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any site_update content.
  $permissions['delete any site_update content'] = array(
    'name' => 'delete any site_update content',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any site_update content.
  $permissions['edit any site_update content'] = array(
    'name' => 'edit any site_update content',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
