<?php
/**
 * @file
 * sparkr_story.features.inc
 */

/**
 * Implements hook_views_api().
 */
function sparkr_story_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sparkr_story_node_info() {
  $items = array(
    'story' => array(
      'name' => t('Verhaal'),
      'base' => 'node_content',
      'description' => t('Een verhaal van hoe energie besparing jou geholpen heeft.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
