<?php
/**
 * @file
 * seeing_and_hearing_online.features.inc
 */

/**
 * Implements hook_node_info().
 */
function seeing_and_hearing_online_node_info() {
  $items = array(
    'link' => array(
      'name' => t('Link'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
