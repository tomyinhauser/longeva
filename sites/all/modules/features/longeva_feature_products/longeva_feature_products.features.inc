<?php
/**
 * @file
 * longeva_feature_products.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function longeva_feature_products_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function longeva_feature_products_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function longeva_feature_products_node_info() {
  $items = array(
    'produtos' => array(
      'name' => t('Produto'),
      'base' => 'node_content',
      'description' => t('Produtos/serviços oferecidos pela empresa.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
