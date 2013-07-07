<?php
/**
 * @file
 * longeva_feature_books.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function longeva_feature_books_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function longeva_feature_books_default_entityform_type() {
  $items = array();
  $items['download_livro'] = entity_import('entityform_type', '{
    "type" : "download_livro",
    "label" : "Download Livro",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submission_rules" : [],
      "validation_rules" : [],
      "submit_button_text" : "Fazer download do livro",
      "submission_page_title" : "41,43% - Download Gratuito",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "entityforms",
      "user_submissions_view" : "user_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "4" : 0, "3" : 0 },
      "resubmit_action" : "new",
      "access_rules" : [],
      "redirect_path" : "sites\\/default\\/files\\/002._4143_site_book.pdf",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EPara obter a vers\\u00e3o gratuita do livro em PDF, apenas preencha o formul\\u00e1rio abaixo:\\u003C\\/p\\u003E",
        "format" : "filtered_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function longeva_feature_books_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Book page'),
      'base' => 'node_content',
      'description' => t('<em>Books</em> have a built-in hierarchical navigation. Use for handbooks or tutorials.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
