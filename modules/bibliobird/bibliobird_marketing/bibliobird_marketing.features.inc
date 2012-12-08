<?php
/**
 * @file
 * bibliobird_marketing.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bibliobird_marketing_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bibliobird_marketing_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bibliobird_marketing_node_info() {
  $items = array(
    'site_update' => array(
      'name' => t('Site update'),
      'base' => 'node_content',
      'description' => t('Information about the site from the administrators that appears on the front page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
