<?php
/**
 * @file
 * gsb_feature_working_paper_ct.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gsb_feature_working_paper_ct_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-working_paper-field_academic_area_unlimited'
  $field_instances['node-working_paper-field_academic_area_unlimited'] = array(
    'bundle' => 'working_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'limit_depth' => 0,
          'path_prefix' => 'faculty-research/working-papers?academic-area[]=',
          'separator' => ', ',
          'tid_or_name' => 'tid',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 6,
      ),
      'expanded' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'idea_story_related' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'insight_featured_card' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'teaser_listing' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'limit_depth' => 0,
          'path_prefix' => 'faculty-research/working-papers?academic-area[]=',
          'separator' => ', ',
          'tid_or_name' => 'tid',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 6,
      ),
      'views_content_pane' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_academic_area_unlimited',
    'label' => 'Academic Area',
    'required' => FALSE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-working_paper-field_authors'
  $field_instances['node-working_paper-field_authors'] = array(
    'bundle' => 'working_paper',
    'custom_add_another' => 'Add Another Author',
    'custom_remove' => 'Remove Author',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'separator' => ', ',
          'view_mode' => 'existing_node_teaser',
        ),
        'type' => 'gsb_field_formatter_field_collection_separator',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'separator' => ', ',
          'view_mode' => 'full',
        ),
        'type' => 'gsb_field_formatter_field_collection_separator',
        'weight' => 1,
      ),
      'expanded' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'separator' => ', ',
          'view_mode' => 'existing_node_teaser',
        ),
        'type' => 'gsb_field_formatter_field_collection_separator',
        'weight' => 3,
      ),
      'idea_story_related' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'separator' => ',',
          'view_mode' => 'existing_node_teaser',
        ),
        'type' => 'gsb_field_formatter_field_collection_separator',
        'weight' => 1,
      ),
      'insight_featured_card' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'separator' => ',',
          'view_mode' => 'existing_node_teaser',
        ),
        'type' => 'gsb_field_formatter_field_collection_separator',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'separator' => ', ',
          'view_mode' => 'existing_node_teaser',
        ),
        'type' => 'gsb_field_formatter_field_collection_separator',
        'weight' => 3,
      ),
      'teaser_listing' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'separator' => ', ',
          'view_mode' => 'existing_node_teaser',
        ),
        'type' => 'gsb_field_formatter_field_collection_separator',
        'weight' => 2,
      ),
      'views_content_pane' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'separator' => ',',
          'view_mode' => 'existing_node_teaser',
        ),
        'type' => 'gsb_field_formatter_field_collection_separator',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_authors',
    'label' => 'Author & Co-Authors',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'field_collection_embed',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_business_insight_topic'
  $field_instances['node-working_paper-field_business_insight_topic'] = array(
    'bundle' => 'working_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'limit_depth' => 0,
          'path_prefix' => 'faculty-research/working-papers?topics[]=',
          'separator' => ', ',
          'tid_or_name' => 'tid',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 7,
      ),
      'expanded' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'idea_story_related' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'insight_featured_card' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'teaser_listing' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'limit_depth' => 0,
          'path_prefix' => 'faculty-research/working-papers?topics[]=',
          'separator' => ', ',
          'tid_or_name' => 'tid',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 7,
      ),
      'views_content_pane' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_business_insight_topic',
    'label' => 'Additional Topics',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'taxonomy_hs',
      'weight' => 21,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'node-working_paper-field_centers_research_programs'
  $field_instances['node-working_paper-field_centers_research_programs'] = array(
    'bundle' => 'working_paper',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 29,
      ),
      'expanded' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'idea_story_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'insight_featured_card' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'views_content_pane' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_centers_research_programs',
    'label' => 'Circle (Centers and Research Programs)',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'use_hierarchical_select_lite' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 23,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_circle_topics'
  $field_instances['node-working_paper-field_circle_topics'] = array(
    'bundle' => 'working_paper',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 31,
      ),
      'expanded' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'idea_story_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'insight_featured_card' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'views_content_pane' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_circle_topics',
    'label' => 'Circle Topics',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'use_hierarchical_select_lite' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 24,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_description'
  $field_instances['node-working_paper-field_description'] = array(
    'bundle' => 'working_paper',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'expanded' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'conditions' => array(),
          'more_link' => 0,
          'more_text' => '',
          'summary_handler' => 'full',
          'trim_length' => 30,
          'trim_link' => 0,
          'trim_options' => array(
            'text' => 0,
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'words',
        ),
        'type' => 'smart_trim_format',
        'weight' => 7,
      ),
      'idea_story_related' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'insight_featured_card' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'conditions' => array(),
          'more_link' => 0,
          'more_text' => '',
          'summary_handler' => 'full',
          'trim_length' => 255,
          'trim_link' => 0,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 5,
      ),
      'teaser_listing' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'conditions' => array(),
          'more_link' => 0,
          'more_text' => '',
          'summary_handler' => 'full',
          'trim_length' => 35,
          'trim_link' => FALSE,
          'trim_options' => array(
            'text' => 0,
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'words',
        ),
        'type' => 'smart_trim_format',
        'weight' => 7,
      ),
      'views_content_pane' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Abstract',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 0,
          'gsb_html_text' => 0,
          'gsb_wysiwyg_text' => 'gsb_wysiwyg_text',
          'plain_text' => 0,
          'slideshow' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 1,
            ),
            'gsb_html_text' => array(
              'weight' => -9,
            ),
            'gsb_wysiwyg_text' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'slideshow' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_document_name'
  $field_instances['node-working_paper-field_document_name'] = array(
    'bundle' => 'working_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'expanded' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'idea_story_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'insight_featured_card' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'views_content_pane' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_document_name',
    'label' => 'Document Name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_document_uuid'
  $field_instances['node-working_paper-field_document_uuid'] = array(
    'bundle' => 'working_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'expanded' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'idea_story_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'insight_featured_card' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'views_content_pane' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_document_uuid',
    'label' => 'Document UUID',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_file_single_public'
  $field_instances['node-working_paper-field_file_single_public'] = array(
    'bundle' => 'working_paper',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'expanded' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'idea_story_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'insight_featured_card' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'file_view_mode' => 'default',
          'text' => 'PDF',
        ),
        'type' => 'gsb_field_formatter_download_link',
        'weight' => 2,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'views_content_pane' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_file_single_public',
    'label' => 'File',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'replace_existing_files' => 0,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 0,
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_file_unlimited_public'
  $field_instances['node-working_paper-field_file_unlimited_public'] = array(
    'bundle' => 'working_paper',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'file_default',
        'weight' => 6,
      ),
      'expanded' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'idea_story_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'insight_featured_card' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'views_content_pane' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_file_unlimited_public',
    'label' => 'Files',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'pdf doc docx xlsx xls ppt pptx txt odf ods odp',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'replace_existing_files' => 0,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 29,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_has_pdf'
  $field_instances['node-working_paper-field_has_pdf'] = array(
    'bundle' => 'working_paper',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'expanded' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'idea_story_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'insight_featured_card' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'views_content_pane' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_has_pdf',
    'label' => 'Has PDF',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_onoff',
      'weight' => 15,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_item_id'
  $field_instances['node-working_paper-field_item_id'] = array(
    'bundle' => 'working_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'expanded' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'idea_story_related' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'insight_featured_card' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'teaser_listing' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'views_content_pane' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_item_id',
    'label' => 'Item ID',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_link_document'
  $field_instances['node-working_paper-field_link_document'] = array(
    'bundle' => 'working_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'expanded' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'idea_story_related' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'insight_featured_card' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'teaser_listing' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'views_content_pane' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_link_document',
    'label' => 'Document Link',
    'required' => 0,
    'settings' => array(
      0 => 'title_label_use_field_label',
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'value',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => 'Download',
      'url' => 'optional',
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'link_field',
      'weight' => 14,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_link_unlimited'
  $field_instances['node-working_paper-field_link_unlimited'] = array(
    'bundle' => 'working_paper',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'expanded' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'idea_story_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'insight_featured_card' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'views_content_pane' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_link_unlimited',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 28,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_month'
  $field_instances['node-working_paper-field_month'] = array(
    'bundle' => 'working_paper',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'expanded' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'idea_story_related' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'insight_featured_card' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'teaser_listing' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'views_content_pane' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_month',
    'label' => 'Month',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_paper_copy'
  $field_instances['node-working_paper-field_paper_copy'] = array(
    'bundle' => 'working_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'expanded' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'idea_story_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'insight_featured_card' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'views_content_pane' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_paper_copy',
    'label' => 'Paper Copy',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'checkall' => FALSE,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_person_ref_unlimited'
  $field_instances['node-working_paper-field_person_ref_unlimited'] = array(
    'bundle' => 'working_paper',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'gsb_feature_existing_node_list_fpp',
        'settings' => array(
          'conditions' => array(),
          'links' => 0,
          'view_mode' => 'people_fpp',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 2,
      ),
      'expanded' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'idea_story_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'insight_featured_card' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'views_content_pane' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_person_ref_unlimited',
    'label' => 'People (Faculty, Alumni, PhD Student, MSx Fellow, Staff)',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 25,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_product_type'
  $field_instances['node-working_paper-field_product_type'] = array(
    'bundle' => 'working_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'expanded' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'idea_story_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'insight_featured_card' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'views_content_pane' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_product_type',
    'label' => 'Product Type',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_select',
      'weight' => 12,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_pub_date_day'
  $field_instances['node-working_paper-field_pub_date_day'] = array(
    'bundle' => 'working_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => 0,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
      'expanded' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => 0,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 5,
      ),
      'idea_story_related' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'insight_featured_card' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'teaser_listing' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
      'views_content_pane' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => 0,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_pub_date_day',
    'label' => 'Day',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'number',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_publication_type'
  $field_instances['node-working_paper-field_publication_type'] = array(
    'bundle' => 'working_paper',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 30,
      ),
      'expanded' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'idea_story_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'insight_featured_card' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'views_content_pane' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_publication_type',
    'label' => 'Publication Type',
    'required' => 0,
    'settings' => array(
      'checkall' => array(
        'checkall' => 0,
        'checkall-check-all' => 1,
        'checkall-toggle' => 1,
        'checkall-uncheck-all' => 1,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'checkall' => FALSE,
      ),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_related_idea_story'
  $field_instances['node-working_paper-field_related_idea_story'] = array(
    'bundle' => 'working_paper',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'gsb_feature_existing_node_list_fpp',
        'settings' => array(
          'conditions' => array(),
          'links' => 0,
          'view_mode' => 'idea_story_related',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 3,
      ),
      'expanded' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'idea_story_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'insight_featured_card' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'views_content_pane' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_related_idea_story',
    'label' => 'Story or Announcement',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 26,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_related_other_unlimited'
  $field_instances['node-working_paper-field_related_other_unlimited'] = array(
    'bundle' => 'working_paper',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'gsb_field_formatter_related_items_field_collection',
        'weight' => 4,
      ),
      'expanded' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'idea_story_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'insight_featured_card' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'views_content_pane' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_related_other_unlimited',
    'label' => 'Publication or Event',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 27,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_research_databases'
  $field_instances['node-working_paper-field_research_databases'] = array(
    'bundle' => 'working_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Must have PDF uploaded to submit to SSRN or EBSCO',
    'display' => array(
      'compact' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'expanded' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'idea_story_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'insight_featured_card' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'views_content_pane' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_research_databases',
    'label' => 'Publish this working paper on the following databases',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'checkall' => FALSE,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_search_field'
  $field_instances['node-working_paper-field_search_field'] = array(
    'bundle' => 'working_paper',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'expanded' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'idea_story_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'insight_featured_card' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'views_content_pane' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_search_field',
    'label' => 'Search field',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'selected_fields' => array(
        'concat_field_entity_label' => 'concat_field_entity_label',
        'field_academic_area_unlimited' => 'field_academic_area_unlimited',
        'field_authors' => 'field_authors',
        'field_business_insight_topic' => 'field_business_insight_topic',
        'field_description' => 'field_description',
        'field_document_name' => 0,
        'field_document_uuid' => 0,
        'field_file_single_public' => 0,
        'field_has_pdf' => 0,
        'field_item_id' => 'field_item_id',
        'field_link_document' => 0,
        'field_month' => 0,
        'field_paper_copy' => 0,
        'field_product_type' => 0,
        'field_pub_date_day' => 0,
        'field_research_databases' => 0,
        'field_submit' => 0,
        'field_tag' => 'field_tag',
        'field_year_of_publication' => 'field_year_of_publication',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'concat_field',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'concat_field_default',
      'weight' => 13,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_submit'
  $field_instances['node-working_paper-field_submit'] = array(
    'bundle' => 'working_paper',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'expanded' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'idea_story_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'insight_featured_card' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'views_content_pane' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_submit',
    'label' => 'Submit',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'submit_field',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'submit_field',
      'weight' => 0,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_tag'
  $field_instances['node-working_paper-field_tag'] = array(
    'bundle' => 'working_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 8,
      ),
      'expanded' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'idea_story_related' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'insight_featured_card' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'teaser_listing' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'views_content_pane' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tag',
    'label' => 'Keywords',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 22,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_year_of_publication'
  $field_instances['node-working_paper-field_year_of_publication'] = array(
    'bundle' => 'working_paper',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'compact' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'expanded' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
      'idea_story_related' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'insight_featured_card' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'teaser_listing' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 5,
      ),
      'views_content_pane' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_year_of_publication',
    'label' => 'Year',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'M j Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Abstract');
  t('Academic Area');
  t('Additional Topics');
  t('Author & Co-Authors');
  t('Circle (Centers and Research Programs)');
  t('Circle Topics');
  t('Day');
  t('Document Link');
  t('Document Name');
  t('Document UUID');
  t('File');
  t('Files');
  t('Has PDF');
  t('Item ID');
  t('Keywords');
  t('Link');
  t('Month');
  t('Must have PDF uploaded to submit to SSRN or EBSCO');
  t('Paper Copy');
  t('People (Faculty, Alumni, PhD Student, MSx Fellow, Staff)');
  t('Product Type');
  t('Publication Type');
  t('Publication or Event');
  t('Publish this working paper on the following databases');
  t('Search field');
  t('Story or Announcement');
  t('Submit');
  t('Year');

  return $field_instances;
}
