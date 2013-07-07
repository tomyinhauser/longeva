<?php
/**
 * @file
 * longeva_feature_sections.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function longeva_feature_sections_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__blog_section';
  $strongarm->value = array();
  $export['field_bundle_settings_taxonomy_term__blog_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_blog_section_pattern';
  $strongarm->value = 'blog/[term:name]';
  $export['pathauto_taxonomy_term_blog_section_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_blog_section';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_blog_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_num_blog_section';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_num_blog_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_end_all_blog_section';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_end_all_blog_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_expanded_blog_section';
  $strongarm->value = 1;
  $export['taxonomy_menu_expanded_blog_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_flat_blog_section';
  $strongarm->value = 0;
  $export['taxonomy_menu_flat_blog_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_hide_empty_terms_blog_section';
  $strongarm->value = 0;
  $export['taxonomy_menu_hide_empty_terms_blog_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_path_blog_section';
  $strongarm->value = 'taxonomy_menu_path_default';
  $export['taxonomy_menu_path_blog_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_rebuild_blog_section';
  $strongarm->value = 0;
  $export['taxonomy_menu_rebuild_blog_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_sync_blog_section';
  $strongarm->value = 1;
  $export['taxonomy_menu_sync_blog_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_term_item_description_blog_section';
  $strongarm->value = 0;
  $export['taxonomy_menu_term_item_description_blog_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_menu_blog_section';
  $strongarm->value = 'main-menu';
  $export['taxonomy_menu_vocab_menu_blog_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_parent_blog_section';
  $strongarm->value = '715';
  $export['taxonomy_menu_vocab_parent_blog_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_blog_section';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_item_blog_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_description_blog_section';
  $strongarm->value = 0;
  $export['taxonomy_menu_voc_item_description_blog_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_name_blog_section';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_name_blog_section'] = $strongarm;

  return $export;
}
