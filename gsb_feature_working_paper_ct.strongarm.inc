<?php
/**
 * @file
 * gsb_feature_working_paper_ct.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_working_paper_ct_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_working_paper';
  $strongarm->value = array();
  $export['menu_options_working_paper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_working_paper';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_working_paper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_working_paper';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_working_paper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_working_paper';
  $strongarm->value = '0';
  $export['node_preview_working_paper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_working_paper';
  $strongarm->value = 0;
  $export['node_submitted_working_paper'] = $strongarm;

  return $export;
}
