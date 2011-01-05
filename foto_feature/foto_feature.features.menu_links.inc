<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function foto_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/foto
  $menu_links['navigation:node/add/foto'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/foto',
    'router_path' => 'node/add/foto',
    'link_title' => 'Foto',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Foto');


  return $menu_links;
}
