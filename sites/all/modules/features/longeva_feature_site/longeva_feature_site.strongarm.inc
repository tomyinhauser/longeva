<?php
/**
 * @file
 * longeva_feature_site.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function longeva_feature_site_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'shiny';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'anonymous';
  $strongarm->value = 'Anonymous';
  $export['anonymous'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'America/Sao_Paulo';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_count';
  $strongarm->value = 2;
  $export['language_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_default';
  $strongarm->value = (object) array(
    'language' => 'pt-br',
    'name' => 'Portuguese, Brazil',
    'native' => 'Português',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '2',
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'pt-br',
    'weight' => '0',
    'javascript' => '7TFpPElYExR4AAMLBWuq3gSFenxHDi--F5VF73eBoUI',
  );
  $export['language_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language';
  $strongarm->value = array(
    'locale-user' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_user',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  );
  $export['language_negotiation_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_content';
  $strongarm->value = array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_url';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_types';
  $strongarm->value = array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  );
  $export['language_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_language_providers_weight_language';
  $strongarm->value = array(
    'locale-url' => '-8',
    'locale-session' => '-6',
    'locale-user' => '-4',
    'locale-browser' => '-2',
    'language-default' => '10',
  );
  $export['locale_language_providers_weight_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_rank_promote';
  $strongarm->value = '0';
  $export['node_rank_promote'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_rank_recent';
  $strongarm->value = '0';
  $export['node_rank_recent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_rank_relevance';
  $strongarm->value = '0';
  $export['node_rank_relevance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_rank_sticky';
  $strongarm->value = '0';
  $export['node_rank_sticky'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled';
  $strongarm->value = TRUE;
  $export['page_manager_node_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_term_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_term_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = '';
  $export['site_403'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_404';
  $strongarm->value = '';
  $export['site_404'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'BR';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'home';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'tomy.inhauser@gmail.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Empresa Longeva';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'Consultoria em Gestão Empresarial';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'zircon';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_garland_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'public://logo-empresa-longeva_0.png',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'garland_width' => 'fluid',
    'scheme' => 'default',
    'palette' => array(
      'base' => '#0072b9',
      'link' => '#027ac6',
      'top' => '#2385c2',
      'bottom' => '#5ab5ee',
      'text' => '#494949',
    ),
    'theme' => 'garland',
    'info' => array(
      'fields' => array(
        'base' => 'Base color',
        'link' => 'Link color',
        'top' => 'Header top',
        'bottom' => 'Header bottom',
        'text' => 'Text color',
      ),
      'schemes' => array(
        'default' => array(
          'title' => 'Blue Lagoon (Default)',
          'colors' => array(
            'base' => '#0072b9',
            'link' => '#027ac6',
            'top' => '#2385c2',
            'bottom' => '#5ab5ee',
            'text' => '#494949',
          ),
        ),
        'ash' => array(
          'title' => 'Ash',
          'colors' => array(
            'base' => '#464849',
            'link' => '#2f416f',
            'top' => '#2a2b2d',
            'bottom' => '#5d6779',
          ),
        ),
        'aquamarine' => array(
          'title' => 'Aquamarine',
          'colors' => array(
            'base' => '#55c0e2',
            'link' => '#000000',
            'text' => '#696969',
            'top' => '#085360',
            'bottom' => '#007e94',
          ),
        ),
        'chocolate' => array(
          'title' => 'Belgian Chocolate',
          'colors' => array(
            'base' => '#d5b048',
            'link' => '#6c420e',
            'top' => '#331900',
            'bottom' => '#971702',
          ),
        ),
        'bluemarine' => array(
          'title' => 'Bluemarine',
          'colors' => array(
            'base' => '#3f3f3f',
            'link' => '#336699',
            'text' => '#000000',
            'top' => '#6598cb',
            'bottom' => '#6598cb',
          ),
        ),
        'citrus' => array(
          'title' => 'Citrus Blast',
          'colors' => array(
            'base' => '#d0cb9a',
            'link' => '#917803',
            'top' => '#efde01',
            'bottom' => '#e6fb2d',
          ),
        ),
        'cold' => array(
          'title' => 'Cold Day',
          'colors' => array(
            'base' => '#0f005c',
            'link' => '#434f8c',
            'text' => '#000000',
            'top' => '#4d91ff',
            'bottom' => '#1a1575',
          ),
        ),
        'greenbeam' => array(
          'title' => 'Greenbeam',
          'colors' => array(
            'base' => '#c9c497',
            'link' => '#0c7a00',
            'top' => '#03961e',
            'bottom' => '#7be000',
          ),
        ),
        'mediterrano' => array(
          'title' => 'Mediterrano',
          'colors' => array(
            'base' => '#ffe23d',
            'link' => '#a9290a',
            'top' => '#fc6d1d',
            'bottom' => '#a30f42',
          ),
        ),
        'mercury' => array(
          'title' => 'Mercury',
          'colors' => array(
            'base' => '#788597',
            'link' => '#3f728d',
            'top' => '#a9adbc',
            'bottom' => '#d4d4d4',
            'text' => '#707070',
          ),
        ),
        'nocturnal' => array(
          'title' => 'Nocturnal',
          'colors' => array(
            'base' => '#5b5fa9',
            'link' => '#5b5faa',
            'top' => '#0a2352',
            'bottom' => '#9fa8d5',
          ),
        ),
        'olivia' => array(
          'title' => 'Olivia',
          'colors' => array(
            'base' => '#7db323',
            'link' => '#6a9915',
            'top' => '#b5d52a',
            'bottom' => '#7db323',
            'text' => '#191a19',
          ),
        ),
        'pink_plastic' => array(
          'title' => 'Pink Plastic',
          'colors' => array(
            'base' => '#12020b',
            'link' => '#1b1a13',
            'top' => '#f391c6',
            'bottom' => '#f41063',
            'text' => '#898080',
          ),
        ),
        'shiny_tomato' => array(
          'title' => 'Shiny Tomato',
          'colors' => array(
            'base' => '#b7a0ba',
            'link' => '#c70000',
            'top' => '#a1443a',
            'bottom' => '#f21107',
            'text' => '#515d52',
          ),
        ),
        'teal_top' => array(
          'title' => 'Teal Top',
          'colors' => array(
            'base' => '#18583d',
            'link' => '#1b5f42',
            'top' => '#34775a',
            'bottom' => '#52bf90',
            'text' => '#2d2d2d',
          ),
        ),
        '' => array(
          'title' => 'Custom',
          'colors' => array(),
        ),
      ),
      'copy' => array(
        0 => 'images/menu-collapsed.gif',
        1 => 'images/menu-collapsed-rtl.gif',
        2 => 'images/menu-expanded.gif',
        3 => 'images/menu-leaf.gif',
      ),
      'css' => array(
        0 => 'style.css',
      ),
      'gradients' => array(
        0 => array(
          'dimension' => array(
            0 => 0,
            1 => 38,
            2 => 760,
            3 => 121,
          ),
          'direction' => 'vertical',
          'colors' => array(
            0 => 'top',
            1 => 'bottom',
          ),
        ),
      ),
      'fill' => array(
        'base' => array(
          0 => 0,
          1 => 0,
          2 => 760,
          3 => 568,
        ),
        'link' => array(
          0 => 107,
          1 => 533,
          2 => 41,
          3 => 23,
        ),
      ),
      'slices' => array(
        'images/body.png' => array(
          0 => 0,
          1 => 37,
          2 => 1,
          3 => 280,
        ),
        'images/bg-bar.png' => array(
          0 => 202,
          1 => 530,
          2 => 76,
          3 => 14,
        ),
        'images/bg-bar-white.png' => array(
          0 => 202,
          1 => 506,
          2 => 76,
          3 => 14,
        ),
        'images/bg-tab.png' => array(
          0 => 107,
          1 => 533,
          2 => 41,
          3 => 23,
        ),
        'images/bg-navigation.png' => array(
          0 => 0,
          1 => 0,
          2 => 7,
          3 => 37,
        ),
        'images/bg-content-left.png' => array(
          0 => 40,
          1 => 117,
          2 => 50,
          3 => 352,
        ),
        'images/bg-content-right.png' => array(
          0 => 510,
          1 => 117,
          2 => 50,
          3 => 352,
        ),
        'images/bg-content.png' => array(
          0 => 299,
          1 => 117,
          2 => 7,
          3 => 200,
        ),
        'images/bg-navigation-item.png' => array(
          0 => 32,
          1 => 37,
          2 => 17,
          3 => 12,
        ),
        'images/bg-navigation-item-hover.png' => array(
          0 => 54,
          1 => 37,
          2 => 17,
          3 => 12,
        ),
        'images/gradient-inner.png' => array(
          0 => 646,
          1 => 307,
          2 => 112,
          3 => 42,
        ),
        'logo.png' => array(
          0 => 622,
          1 => 51,
          2 => 64,
          3 => 73,
        ),
        'screenshot.png' => array(
          0 => 0,
          1 => 37,
          2 => 400,
          3 => 240,
        ),
      ),
      'blend_target' => '#ffffff',
      'preview_image' => 'color/preview.png',
      'preview_css' => 'color/preview.css',
      'base_image' => 'color/base.png',
    ),
  );
  $export['theme_garland_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'public://longeva.png',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  );
  $export['theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_zircon_settings';
  $strongarm->value = array(
    'nucleus_version' => '',
    'grid' => '24',
    'layout_width_selector' => 'custom',
    'layout_width_custom' => '960px',
    'skin' => 'longeva',
    'region_block_hidden_search_form' => 'header',
    'region_block_hidden_system_main_menu' => 'menu_bar',
    'region_block_hidden_views_blog_sections_block' => 'slideshow',
    'region_block_hidden_views_slideshow_block' => 'slideshow',
    'region_block_hidden_system_help' => 'help',
    'region_block_hidden_system_main' => 'content',
    'region_block_hidden_block_9' => 'content',
    'region_block_hidden_views_blog_items_block_front' => 'content',
    'region_block_hidden_views_blog_items_block_home' => 'content',
    'region_block_hidden_views_blog_items_block_taxonomy' => 'content',
    'region_block_hidden_views_blog_items_sidebar_block_news' => 'sidebar_second',
    'region_block_hidden_views_5e8044220025bb15b8843a1a6a17909b' => 'sidebar_second',
    'region_block_hidden_views_edf6b11487c1304099bc21679219f4bb' => 'sidebar_second',
    'region_block_hidden_views_blog_items_sidebar_block_books' => 'sidebar_second',
    'region_block_hidden_views_05aa98fd0fcc610e3e5e6564bbfe18ea' => 'sidebar_second',
    'region_block_hidden_views_blog_items_sidebar_block_videos' => 'sidebar_second',
    'region_block_hidden_block_3' => 'footer',
    'region_block_hidden_menu_menu_acompanhe' => 'panel_third_1',
    'region_block_hidden_block_7' => 'panel_third_2',
    'region_block_hidden_block_8' => 'panel_third_3',
    'region_block_hidden_system_user_menu' => 'panel_third_4',
    'region_block_hidden_menu_menu_artigos' => '-1',
    'region_block_hidden_quicktabs_blogs' => '-1',
    'region_block_hidden_bookblock_37' => '-1',
    'region_block_hidden_book_navigation' => '-1',
    'region_block_hidden_context_ui_editor' => '-1',
    'region_block_hidden_menu_features' => '-1',
    'region_block_hidden_locale_language' => '-1',
    'region_block_hidden_system_management' => '-1',
    'region_block_hidden_system_navigation' => '-1',
    'region_block_hidden_system_powered_by' => '-1',
    'region_block_hidden_blog_recent' => '-1',
    'region_block_hidden_node_recent' => '-1',
    'region_block_hidden_shortcut_shortcuts' => '-1',
    'region_block_hidden_node_syndicate' => '-1',
    'region_block_hidden_user_login' => '-1',
    'region_block_hidden_user_new' => '-1',
    'region_block_hidden_user_online' => '-1',
    'block_weight_hidden_search_form' => '-10',
    'block_weight_hidden_system_main_menu' => '-14',
    'block_weight_hidden_views_blog_sections_block' => '-13',
    'block_weight_hidden_views_slideshow_block' => '2',
    'block_weight_hidden_system_help' => '0',
    'block_weight_hidden_system_main' => '-11',
    'block_weight_hidden_block_9' => '0',
    'block_weight_hidden_views_blog_items_block_front' => '0',
    'block_weight_hidden_views_blog_items_block_home' => '0',
    'block_weight_hidden_views_blog_items_block_taxonomy' => '0',
    'block_weight_hidden_views_blog_items_sidebar_block_news' => '-17',
    'block_weight_hidden_views_5e8044220025bb15b8843a1a6a17909b' => '-16',
    'block_weight_hidden_views_edf6b11487c1304099bc21679219f4bb' => '-15',
    'block_weight_hidden_views_blog_items_sidebar_block_books' => '-14',
    'block_weight_hidden_views_05aa98fd0fcc610e3e5e6564bbfe18ea' => '-13',
    'block_weight_hidden_views_blog_items_sidebar_block_videos' => '-12',
    'block_weight_hidden_block_3' => '-17',
    'block_weight_hidden_menu_menu_acompanhe' => '-18',
    'block_weight_hidden_block_7' => '0',
    'block_weight_hidden_block_8' => '0',
    'block_weight_hidden_system_user_menu' => '-16',
    'block_weight_hidden_menu_menu_artigos' => '-13',
    'block_weight_hidden_quicktabs_blogs' => '-12',
    'block_weight_hidden_bookblock_37' => '-11',
    'block_weight_hidden_book_navigation' => '-10',
    'block_weight_hidden_context_ui_editor' => '-9',
    'block_weight_hidden_menu_features' => '-8',
    'block_weight_hidden_locale_language' => '-7',
    'block_weight_hidden_system_management' => '-6',
    'block_weight_hidden_system_navigation' => '-5',
    'block_weight_hidden_system_powered_by' => '-4',
    'block_weight_hidden_blog_recent' => '-3',
    'block_weight_hidden_node_recent' => '-2',
    'block_weight_hidden_shortcut_shortcuts' => '-1',
    'block_weight_hidden_node_syndicate' => '0',
    'block_weight_hidden_user_login' => '1',
    'block_weight_hidden_user_new' => '3',
    'block_weight_hidden_user_online' => '4',
    'region_page_top_style' => '',
    'region_page_top_extend_class' => '',
    'block_search_form_style' => '',
    'block_search_form_extend_class' => '',
    'region_header_style' => '',
    'region_header_extend_class' => '',
    'block_system_main_menu_style' => '',
    'block_system_main_menu_extend_class' => '',
    'region_menu_bar_style' => '',
    'region_menu_bar_extend_class' => '',
    'block_views_blog_sections_block_style' => '',
    'block_views_blog_sections_block_extend_class' => '',
    'block_views_slideshow_block_style' => '',
    'block_views_slideshow_block_extend_class' => '',
    'region_slideshow_style' => 'view',
    'region_slideshow_extend_class' => 'view_group view-main-slideshow',
    'block_system_help_style' => '',
    'block_system_help_extend_class' => '',
    'region_help_style' => '',
    'region_help_extend_class' => '',
    'region_highlighted_style' => '',
    'region_highlighted_extend_class' => '',
    'block_system_main_style' => '',
    'block_system_main_extend_class' => '',
    'block_block_9_style' => '',
    'block_block_9_extend_class' => '',
    'block_views_blog_items_block_front_style' => '',
    'block_views_blog_items_block_front_extend_class' => '',
    'block_views_blog_items_block_home_style' => '',
    'block_views_blog_items_block_home_extend_class' => '',
    'block_views_blog_items_block_taxonomy_style' => '',
    'block_views_blog_items_block_taxonomy_extend_class' => '',
    'region_content_style' => '',
    'region_content_extend_class' => '',
    'region_sidebar_first_style' => '',
    'region_sidebar_first_extend_class' => '',
    'block_views_blog_items_sidebar_block_news_style' => '',
    'block_views_blog_items_sidebar_block_news_extend_class' => '',
    'block_views_5e8044220025bb15b8843a1a6a17909b_style' => '',
    'block_views_5e8044220025bb15b8843a1a6a17909b_extend_class' => '',
    'block_views_edf6b11487c1304099bc21679219f4bb_style' => '',
    'block_views_edf6b11487c1304099bc21679219f4bb_extend_class' => '',
    'block_views_blog_items_sidebar_block_books_style' => '',
    'block_views_blog_items_sidebar_block_books_extend_class' => '',
    'block_views_05aa98fd0fcc610e3e5e6564bbfe18ea_style' => '',
    'block_views_05aa98fd0fcc610e3e5e6564bbfe18ea_extend_class' => '',
    'block_views_blog_items_sidebar_block_videos_style' => '',
    'block_views_blog_items_sidebar_block_videos_extend_class' => '',
    'region_sidebar_second_style' => '',
    'region_sidebar_second_extend_class' => '',
    'region_page_bottom_style' => '',
    'region_page_bottom_extend_class' => '',
    'block_block_3_style' => '',
    'block_block_3_extend_class' => '',
    'region_footer_style' => '',
    'region_footer_extend_class' => '',
    'region_panel_first_1_style' => 'view',
    'region_panel_first_1_extend_class' => 'badge_group block-badge-hot view_group view-grid-panel',
    'region_panel_first_2_style' => 'view',
    'region_panel_first_2_extend_class' => 'view_group view-grid-panel',
    'region_panel_first_3_style' => 'view',
    'region_panel_first_3_extend_class' => 'badge_group block-badge-new view_group view-grid-panel',
    'region_panel_first_4_style' => 'view',
    'region_panel_first_4_extend_class' => 'view_group view-grid-panel',
    'region_panel_first_5_style' => '',
    'region_panel_first_5_extend_class' => '',
    'region_panel_first_6_style' => '',
    'region_panel_first_6_extend_class' => '',
    'region_panel_second_1_style' => 'view',
    'region_panel_second_1_extend_class' => 'view_group view-horizontal-carousel',
    'region_panel_second_2_style' => '',
    'region_panel_second_2_extend_class' => '',
    'region_panel_second_3_style' => '',
    'region_panel_second_3_extend_class' => '',
    'region_panel_second_4_style' => '',
    'region_panel_second_4_extend_class' => '',
    'region_panel_second_5_style' => '',
    'region_panel_second_5_extend_class' => '',
    'region_panel_second_6_style' => '',
    'region_panel_second_6_extend_class' => '',
    'block_menu_menu_acompanhe_style' => '',
    'block_menu_menu_acompanhe_extend_class' => '',
    'region_panel_third_1_style' => 'custom',
    'region_panel_third_1_extend_class' => 'custom_group block-custom-links',
    'block_block_7_style' => '',
    'block_block_7_extend_class' => '',
    'region_panel_third_2_style' => 'custom',
    'region_panel_third_2_extend_class' => 'custom_group block-custom-address',
    'block_block_8_style' => '',
    'block_block_8_extend_class' => '',
    'region_panel_third_3_style' => 'custom',
    'region_panel_third_3_extend_class' => 'custom_group block-custom-contact',
    'block_system_user_menu_style' => '',
    'block_system_user_menu_extend_class' => '',
    'region_panel_third_4_style' => 'custom',
    'region_panel_third_4_extend_class' => 'custom_group block-custom-form',
    'region_panel_third_5_style' => '',
    'region_panel_third_5_extend_class' => '',
    'region_panel_third_6_style' => '',
    'region_panel_third_6_extend_class' => '',
    'block_menu_menu_artigos_style' => '',
    'block_menu_menu_artigos_extend_class' => '',
    'block_quicktabs_blogs_style' => '',
    'block_quicktabs_blogs_extend_class' => '',
    'block_bookblock_37_style' => '',
    'block_bookblock_37_extend_class' => '',
    'block_book_navigation_style' => '',
    'block_book_navigation_extend_class' => '',
    'block_context_ui_editor_style' => '',
    'block_context_ui_editor_extend_class' => '',
    'block_menu_features_style' => '',
    'block_menu_features_extend_class' => '',
    'block_locale_language_style' => '',
    'block_locale_language_extend_class' => '',
    'block_system_management_style' => '',
    'block_system_management_extend_class' => '',
    'block_system_navigation_style' => '',
    'block_system_navigation_extend_class' => '',
    'block_system_powered_by_style' => '',
    'block_system_powered_by_extend_class' => '',
    'block_blog_recent_style' => '',
    'block_blog_recent_extend_class' => '',
    'block_node_recent_style' => '',
    'block_node_recent_extend_class' => '',
    'block_shortcut_shortcuts_style' => '',
    'block_shortcut_shortcuts_extend_class' => '',
    'block_node_syndicate_style' => '',
    'block_node_syndicate_extend_class' => '',
    'block_user_login_style' => '',
    'block_user_login_extend_class' => '',
    'block_user_new_style' => '',
    'block_user_new_extend_class' => '',
    'block_user_online_style' => '',
    'block_user_online_extend_class' => '',
    'sidebar_first_width' => '6',
    'sidebar_second_width' => '6',
    'panel_first_1_width' => '6',
    'panel_first_2_width' => '6',
    'panel_first_3_width' => '6',
    'panel_first_4_width' => '6',
    'panel_first_5_width' => '',
    'panel_first_6_width' => '',
    'panel_second_1_width' => '24',
    'panel_second_2_width' => '6',
    'panel_second_3_width' => '6',
    'panel_second_4_width' => '6',
    'panel_second_5_width' => '',
    'panel_second_6_width' => '',
    'panel_third_1_width' => '6',
    'panel_third_2_width' => '6',
    'panel_third_3_width' => '6',
    'panel_third_4_width' => '6',
    'panel_third_5_width' => '',
    'panel_third_6_width' => '',
    'quicktabs_extend_style_blogs' => '',
    'base_font' => 'bf-a',
    'base_font_gwf' => '',
    'base_font_custom' => '',
    'base_font_type' => '',
    'site_name_font' => '',
    'site_name_font_gwf' => '',
    'site_name_font_custom' => '',
    'site_name_font_type' => '',
    'site_slogan_font' => '',
    'site_slogan_font_gwf' => '',
    'site_slogan_font_custom' => '',
    'site_slogan_font_type' => '',
    'page_title_font' => '',
    'page_title_font_gwf' => '',
    'page_title_font_custom' => '',
    'page_title_font_type' => '',
    'node_title_font' => '',
    'node_title_font_gwf' => '',
    'node_title_font_custom' => '',
    'node_title_font_type' => '',
    'comment_title_font' => '',
    'comment_title_font_gwf' => '',
    'comment_title_font_custom' => '',
    'comment_title_font_type' => '',
    'block_title_font' => '',
    'block_title_font_gwf' => '',
    'block_title_font_custom' => '',
    'block_title_font_type' => '',
    'font_size' => 'fs-small',
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => '1',
    'toggle_comment_user_picture' => '1',
    'toggle_comment_user_verification' => '1',
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 0,
    'breadcrumb_display' => 1,
    'back_to_top_display' => 1,
    'show_skins_menu' => 0,
    'default_logo' => 0,
    'logo_path' => 'public://longeva-transparente.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'nucleus_use_default_settings' => '0',
    'nucleus_current_theme' => 'zircon',
    'nucleus__active_tab' => 'edit-layout',
  );
  $export['theme_zircon_settings'] = $strongarm;

  return $export;
}
