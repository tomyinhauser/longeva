<?php
/**
 * @file
 * longeva_feature_products.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function longeva_feature_products_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:consultoria
  $menu_links['main-menu:consultoria'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'consultoria',
    'router_path' => 'consultoria',
    'link_title' => 'Produtos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Produtos');


  return $menu_links;
}
