<?php
/**
 * @file
 * longeva_feature_social.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function longeva_feature_social_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-acompanhe:blog
  $menu_links['menu-acompanhe:blog'] = array(
    'menu_name' => 'menu-acompanhe',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
  );
  // Exported menu link: menu-acompanhe:http://br.linkedin.com/pub/marcio-rubens-inhauser/4b/715/a49
  $menu_links['menu-acompanhe:http://br.linkedin.com/pub/marcio-rubens-inhauser/4b/715/a49'] = array(
    'menu_name' => 'menu-acompanhe',
    'link_path' => 'http://br.linkedin.com/pub/marcio-rubens-inhauser/4b/715/a49',
    'router_path' => '',
    'link_title' => 'LinkedIn',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
  );
  // Exported menu link: menu-acompanhe:https://twitter.com/empresalongeva
  $menu_links['menu-acompanhe:https://twitter.com/empresalongeva'] = array(
    'menu_name' => 'menu-acompanhe',
    'link_path' => 'https://twitter.com/empresalongeva',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('LinkedIn');
  t('Twitter');


  return $menu_links;
}
