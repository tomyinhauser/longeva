<?php
/**
 * @file
 * longeva_feature_destaques.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function longeva_feature_destaques_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function longeva_feature_destaques_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function longeva_feature_destaques_image_default_styles() {
  $styles = array();

  // Exported image style: destaque.
  $styles['destaque'] = array(
    'name' => 'destaque',
    'effects' => array(
      2 => array(
        'label' => 'Escalar e cortar',
        'help' => '"Escalar e cortar", primeiro redimensiona a imagem mantendo a proporção e em seguida, vai cortará a dimensão maior. Isto é útil para criar miniaturas quadradas, sem esticar a imagem.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 330,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function longeva_feature_destaques_node_info() {
  $items = array(
    'highlight' => array(
      'name' => t('Destaque'),
      'base' => 'node_content',
      'description' => t('Informações em destaque no site.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
