<?php
/**
 * @file
 * bibliobird_wiki.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function bibliobird_wiki_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bibliobird_wiki';
  $context->description = 'The wiki on Bibliobird.com';
  $context->tag = 'bibliobird_wiki';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'wiki' => 'wiki',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'wiki' => 'wiki',
        'wiki/*' => 'wiki/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'wiki',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('The wiki on Bibliobird.com');
  t('bibliobird_wiki');
  $export['bibliobird_wiki'] = $context;

  return $export;
}
