<?php
/**
 * @file
 * bibliobird_forum.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bibliobird_forum_user_default_permissions() {
  $permissions = array();

  // Exported permission: create forum content.
  $permissions['create forum content'] = array(
    'name' => 'create forum content',
    'roles' => array(
      0 => 'admin',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own forum content.
  $permissions['edit own forum content'] = array(
    'name' => 'edit own forum content',
    'roles' => array(
      0 => 'Forum Moderator',
      1 => 'admin',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
