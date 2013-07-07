<?php
/**
 * @file
 * longeva_feature_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function longeva_feature_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function longeva_feature_pages_node_info() {
  $items = array(
    'basic_page' => array(
      'name' => t('Página'),
      'base' => 'node_content',
      'description' => t('Página com conteúdo em HTML apenas.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
