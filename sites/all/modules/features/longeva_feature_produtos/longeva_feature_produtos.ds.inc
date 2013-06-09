<?php
/**
 * @file
 * longeva_feature_produtos.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function longeva_feature_produtos_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|produto|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'produto';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_thumbnail',
      ),
      'right' => array(
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_thumbnail' => 'left',
      'body' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|produto|full'] = $ds_layout;

  return $export;
}
