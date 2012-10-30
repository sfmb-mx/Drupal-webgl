<?php
/**
 * @file
 * square.features.inc
 */

/**
 * Implements hook_node_info().
 */
function square_node_info() {
  $items = array(
    'square' => array(
      'name' => t('Square'),
      'base' => 'node_content',
      'description' => t('This is a square that will hopefully output in our WebGL view'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
