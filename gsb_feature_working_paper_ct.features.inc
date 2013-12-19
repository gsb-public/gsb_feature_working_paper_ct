<?php
/**
 * @file
 * gsb_feature_working_paper_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_working_paper_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gsb_feature_working_paper_ct_node_info() {
  $items = array(
    'working_paper' => array(
      'name' => t('Working Paper'),
      'base' => 'node_content',
      'description' => t('The GSB Public Working Paper content type is used for working paper on the GSB Public web site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
