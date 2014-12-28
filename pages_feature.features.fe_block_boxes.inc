<?php
/**
 * @file
 * pages_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function pages_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Main welcome block on the front page.';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'front_main';
  $fe_block_boxes->body = '<div style="float: left; margin-right: 1em;"><img alt="" class="media-image attr__typeof__foaf:Image img__fid__17 img__view_mode__media_large attr__format__media_large" height="235" src="http://stage.openfoodfoundation.org/sites/default/files/styles/large/public/OF_circle%20only.jpg?itok=uUghG_uY" typeof="foaf:Image" width="240" /></div>

<div>
<h1 style="font-size: 48px; padding-top: 1em;"><strong>OPEN FOOD FOUNDATION</strong></h1>

<h2>Open source solutions for the food revolution!</h2>

<p><br />
<a class="button secondary large radius" href="/about">Learn more</a></p>
</div>
';

  $export['front_main'] = $fe_block_boxes;

  return $export;
}
