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
  $fe_block_boxes->body = '<h1>Open Food Foundation</h1>

<h2><em>Open source solutions for the food revolution!</em></h2>

<a class="button secondary large radius" href="/about">Learn more</a>

';

  $export['front_main'] = $fe_block_boxes;

  return $export;
}
