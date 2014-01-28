<?php
/**
 * @file
 * off_pages_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function off_pages_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Main welcome block on the front page.';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'front_main';
  $fe_block_boxes->body = '<h1 style="font-size: 48px !important;">Open Food Foundation</h1>

<p>Welcome. It is good here.</p>
';

  $export['front_main'] = $fe_block_boxes;

  return $export;
}
