<?php
/**
 * @file
 * bibliobird_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bibliobird_profile_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
