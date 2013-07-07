<?php
/**
 * @file
 * longeva_feature_highlights.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function longeva_feature_highlights_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|highlight|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'highlight';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|highlight|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function longeva_feature_highlights_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|highlight|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'highlight';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_thumbnail',
        1 => 'field_link',
      ),
      'right' => array(
        2 => 'title',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_thumbnail' => 'left',
      'field_link' => 'left',
      'title' => 'right',
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
  $export['node|highlight|teaser'] = $ds_layout;

  return $export;
}
