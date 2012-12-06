<?php
/**
 * @file
 * bibliobird_notifications.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bibliobird_notifications_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_per_type';
  $strongarm->value = '1';
  $export['notifications_content_per_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type_forum';
  $strongarm->value = array(
    0 => 'content_thread',
  );
  $export['notifications_content_type_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type_wiki';
  $strongarm->value = array(
    0 => 'content_thread',
  );
  $export['notifications_content_type_wiki'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_option_subscribe_links';
  $strongarm->value = '0';
  $export['notifications_option_subscribe_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_option_subscription_types_content_thread';
  $strongarm->value = array(
    'enabled' => 1,
  );
  $export['notifications_option_subscription_types_content_thread'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_option_subscription_types_content_type';
  $strongarm->value = array(
    'enabled' => 1,
  );
  $export['notifications_option_subscription_types_content_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_option_subscription_types_content_type_term';
  $strongarm->value = array(
    'enabled' => 0,
  );
  $export['notifications_option_subscription_types_content_type_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_option_subscription_types_taxonomy_term';
  $strongarm->value = array(
    'enabled' => 1,
  );
  $export['notifications_option_subscription_types_taxonomy_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_option_subscription_types_taxonomy_term_multiple';
  $strongarm->value = array(
    'enabled' => 0,
  );
  $export['notifications_option_subscription_types_taxonomy_term_multiple'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_option_subscription_types_taxonomy_vocabulary';
  $strongarm->value = array(
    'enabled' => 0,
  );
  $export['notifications_option_subscription_types_taxonomy_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_option_unsubscribe_links';
  $strongarm->value = '0';
  $export['notifications_option_unsubscribe_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_sender';
  $strongarm->value = '1';
  $export['notifications_sender'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_tags_showsubscribed';
  $strongarm->value = 0;
  $export['notifications_tags_showsubscribed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_tags_vocabularies';
  $strongarm->value = array(
    2 => 2,
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $export['notifications_tags_vocabularies'] = $strongarm;

  return $export;
}
