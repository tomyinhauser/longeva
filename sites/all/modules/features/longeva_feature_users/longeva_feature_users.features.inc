<?php
/**
 * @file
 * longeva_feature_users.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function longeva_feature_users_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
