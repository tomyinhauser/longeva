<?php
/**
 * @file
 * longeva_feature_social.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function longeva_feature_social_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-acompanhe.
  $menus['menu-acompanhe'] = array(
    'menu_name' => 'menu-acompanhe',
    'title' => 'Redes Sociais',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Redes Sociais');


  return $menus;
}
