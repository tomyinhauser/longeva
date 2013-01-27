<?php
/**
 * @file
 * longeva_structure.features.inc
 */

/**
 * Implements hook_node_info().
 */
function longeva_structure_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'institucional' => array(
      'name' => t('Institucional'),
      'base' => 'node_content',
      'description' => t('Dados institucionais da Empresa Longeva'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
