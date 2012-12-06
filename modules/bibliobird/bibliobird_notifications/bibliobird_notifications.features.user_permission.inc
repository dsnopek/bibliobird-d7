<?php
/**
 * @file
 * bibliobird_notifications.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bibliobird_notifications_user_default_permissions() {
  $permissions = array();

  // Exported permission: create subscriptions.
  $permissions['create subscriptions'] = array(
    'name' => 'create subscriptions',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'notifications',
  );

  // Exported permission: maintain own subscriptions.
  $permissions['maintain own subscriptions'] = array(
    'name' => 'maintain own subscriptions',
    'roles' => array(
      0 => 'admin',
      1 => 'authenticated user',
      2 => 'unverified user',
    ),
    'module' => 'notifications',
  );

  // Exported permission: subscribe to content.
  $permissions['subscribe to content'] = array(
    'name' => 'subscribe to content',
    'roles' => array(
      0 => 'admin',
      1 => 'authenticated user',
      2 => 'unverified user',
    ),
    'module' => 'notifications_content',
  );

  // Exported permission: subscribe to content type.
  $permissions['subscribe to content type'] = array(
    'name' => 'subscribe to content type',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'notifications_content',
  );

  // Exported permission: subscribe to taxonomy terms.
  $permissions['subscribe to taxonomy terms'] = array(
    'name' => 'subscribe to taxonomy terms',
    'roles' => array(
      0 => 'admin',
      1 => 'authenticated user',
      2 => 'unverified user',
    ),
    'module' => 'notifications_tags',
  );

  return $permissions;
}
