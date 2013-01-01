<?php
/**
 * @file
 * pro_basic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pro_basic_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pro_basic_node_info() {
  $items = array(
    'client' => array(
      'name' => t('Client'),
      'base' => 'node_content',
      'description' => t('Store client data'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'faq' => array(
      'name' => t('FAQ'),
      'base' => 'node_content',
      'description' => t('Frequently Asked Question'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service' => array(
      'name' => t('Service'),
      'base' => 'node_content',
      'description' => t('pro service'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => t('feedback from clients and partners'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
