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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
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
    ),
    'entity_type' => 'node',
    'field_name' => 'field_academic_area_unlimited',
    'label' => 'Academic Area',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-working_paper-field_authors'
  $field_instances['node-working_paper-field_authors'] = array(
    'bundle' => 'working_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'To add yourself or another Stanford GSB faculty member as an author, click the button next to "Faculty," then enter the first few characters of the first or last name. The lookup feature will display potential matches; click on the desired name.<br><br> 
To add a non-Stanford-GSB author, enter the first and last name of the individual in their respective fields. If you would like to include a middle initial, enter it in the "First Name" field.<br><br>
To list authors in a specific order, grab the handle icon <img src="/sites/gsb/files/styles/566x_variable/public/icon-handle-drag-drop.png?itok=boIYoP_K" height="25" width="25" /> next to an author and drag it up or down to the desired position.<br><br>',
    'display' => array(
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
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'separator' => ', ',
          'view_mode' => 'existing_node_teaser',
        ),
        'type' => 'gsb_field_formatter_field_collection_separator',
        'weight' => 1,
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
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_authors',
    'label' => 'Authors',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'field_collection_embed',
      'weight' => 2,
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
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
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_business_insight_topic',
    'label' => 'Additional Topic',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'taxonomy_hs',
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_description'
  $field_instances['node-working_paper-field_description'] = array(
    'bundle' => 'working_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a one-paragraph abstract. Multiple paragraphs will be merged into one.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'conditions' => array(),
          'more_link' => 0,
          'more_text' => '',
          'summary_handler' => 'full',
          'trim_length' => 35,
          'trim_options' => array(
            'text' => 0,
          ),
          'trim_suffix' => '...',
          'trim_type' => 'words',
        ),
        'type' => 'smart_trim_format',
        'weight' => 3,
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
          'trim_options' => array(
            'text' => 0,
          ),
          'trim_suffix' => '...',
          'trim_type' => 'words',
        ),
        'type' => 'smart_trim_format',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Abstract',
    'required' => 0,
    'settings' => array(
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
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
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
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_document_name',
    'label' => 'Document Name',
    'required' => 0,
    'settings' => array(
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
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
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
        'weight' => 25,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_document_uuid',
    'label' => 'Document UUID',
    'required' => 0,
    'settings' => array(
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
    'deleted' => 0,
    'description' => 'Click "Choose File," select the file, click "Open," then click "Upload."',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'file_default',
        'weight' => 27,
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
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_file_single_public',
    'label' => 'Paper',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf',
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
      'weight' => 5,
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
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'teaser_listing' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_item_id',
    'label' => 'Item ID',
    'required' => 0,
    'settings' => array(
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
      'weight' => 9,
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
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_paper_copy',
    'label' => 'Paper Copy',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'link',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'link_field',
      'weight' => 8,
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
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
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
        'weight' => 16,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_product_type',
    'label' => 'Product Type',
    'required' => 0,
    'settings' => array(
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
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 31,
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
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_pub_date_day',
    'label' => 'Day',
    'required' => 0,
    'settings' => array(
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
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_pub_date_month'
  $field_instances['node-working_paper-field_pub_date_month'] = array(
    'bundle' => 'working_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the numeric equivalent for desired month (1-12).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 30,
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
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_pub_date_month',
    'label' => 'Month',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_select',
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_research_databases'
  $field_instances['node-working_paper-field_research_databases'] = array(
    'bundle' => 'working_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 28,
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
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_research_databases',
    'label' => 'Publish this working paper on the following databases',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_search_field'
  $field_instances['node-working_paper-field_search_field'] = array(
    'bundle' => 'working_paper',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_search_field',
    'label' => 'Search field',
    'required' => 0,
    'settings' => array(
      'selected_fields' => array(
        'concat_field_entity_label' => 'concat_field_entity_label',
        'field_academic_area_unlimited' => 'field_academic_area_unlimited',
        'field_author' => 'field_author',
        'field_author_sunet_id_reference' => 0,
        'field_business_insight_topic' => 'field_business_insight_topic',
        'field_description' => 'field_description',
        'field_document_name' => 0,
        'field_document_uuid' => 0,
        'field_item_id' => 0,
        'field_link_document' => 0,
        'field_paper_copy' => 0,
        'field_product_type' => 0,
        'field_tag' => 'field_tag',
        'field_year' => 'field_year',
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
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'submit_field_default',
        'weight' => 28,
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
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_submit',
    'label' => 'Submit',
    'required' => 0,
    'settings' => array(
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
      'default' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser_listing' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tag',
    'label' => 'Keywords',
    'required' => 0,
    'settings' => array(
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
      'weight' => 9,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-working_paper-field_year_of_publication'
  $field_instances['node-working_paper-field_year_of_publication'] = array(
    'bundle' => 'working_paper',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 29,
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
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_year_of_publication',
    'label' => 'Year',
    'required' => 0,
    'settings' => array(
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
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Abstract');
  t('Academic Area');
  t('Additional Topic');
  t('Authors');
  t('Click "Choose File," select the file, click "Open," then click "Upload."');
  t('Day');
  t('Document Name');
  t('Document UUID');
  t('Enter a one-paragraph abstract. Multiple paragraphs will be merged into one.');
  t('Enter the numeric equivalent for desired month (1-12).');
  t('Item ID');
  t('Keywords');
  t('Month');
  t('Paper');
  t('Paper Copy');
  t('Product Type');
  t('Publish this working paper on the following databases');
  t('Search field');
  t('Submit');
  t('To add yourself or another Stanford GSB faculty member as an author, click the button next to "Faculty," then enter the first few characters of the first or last name. The lookup feature will display potential matches; click on the desired name.<br><br> 
To add a non-Stanford-GSB author, enter the first and last name of the individual in their respective fields. If you would like to include a middle initial, enter it in the "First Name" field.<br><br>
To list authors in a specific order, grab the handle icon <img src="/sites/gsb/files/styles/566x_variable/public/icon-handle-drag-drop.png?itok=boIYoP_K" height="25" width="25" /> next to an author and drag it up or down to the desired position.<br><br>');
  t('Year');

  return $field_instances;
}
