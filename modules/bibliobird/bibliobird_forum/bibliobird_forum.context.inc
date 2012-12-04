<?php
/**
 * @file
 * bibliobird_forum.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function bibliobird_forum_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bibliobird_forum';
  $context->description = 'The forum on Bibliobird.com';
  $context->tag = 'bibliobird_forum';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'forum' => 'forum',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'forum' => 'forum',
        'forum/*' => 'forum/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'forum',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('The forum on Bibliobird.com');
  t('bibliobird_forum');
  $export['bibliobird_forum'] = $context;

  return $export;
}
