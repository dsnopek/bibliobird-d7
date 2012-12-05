<?php
/**
 * @file
 * bibliobird_wiki.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bibliobird_wiki_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:wiki
  $menu_links['main-menu:wiki'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wiki',
    'router_path' => 'wiki',
    'link_title' => 'Wiki',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Wiki');


  return $menu_links;
}
