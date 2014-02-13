<?php
/**
 * @file
 * off_pages_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function off_pages_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-front_main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'front_main',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'custom_zurb' => array(
        'region' => 'featured',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
