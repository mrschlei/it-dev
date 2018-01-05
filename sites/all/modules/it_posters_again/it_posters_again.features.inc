<?php
/**
 * @file
 * it_posters_again.features.inc
 */

/**
 * Implements hook_node_info().
 */
function it_posters_again_node_info() {
  $items = array(
    'poster_it_symposium' => array(
      'name' => t('Poster - IT Symposium'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
