<?php
/**
 * @file
 * bibliobird_newsletter.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bibliobird_newsletter_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer mailchimp.
  $permissions['administer mailchimp'] = array(
    'name' => 'administer mailchimp',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'mailchimp',
  );

  // Exported permission: administer mailchimp campaigns.
  $permissions['administer mailchimp campaigns'] = array(
    'name' => 'administer mailchimp campaigns',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'mailchimp_campaign',
  );

  // Exported permission: use text format mailchimp_campaign.
  $permissions['use text format mailchimp_campaign'] = array(
    'name' => 'use text format mailchimp_campaign',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
