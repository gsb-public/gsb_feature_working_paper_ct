<?php

/**
 * Form constructor for the GSB Working Paper Refresh DB email settings form.
 */
function gsb_feature_working_paper_ct_refresh_db_email_settings_form($form, &$form_state) {
  $form['gsb_feature_working_paper_ct_refresh_db_contact_email'] = array(
    '#title' => t('Email Body'),
    '#description' => t('This is the email address used when sending refresh db state changes.'),
    '#type' => 'textfield',
    '#default_value' => variable_get('gsb_feature_working_paper_ct_refresh_db_contact_email', t('')),
  );	
  $form['gsb_feature_working_paper_ct_refresh_db_email_body'] = array(
    '#title' => t('Email Body'),
    '#description' => t('This is the email body sent on any refresh db state changes.'),
    '#type' => 'textarea',
    '#default_value' => variable_get('gsb_feature_working_paper_ct_refresh_db_email_body', t('')),
  );
  return system_settings_form($form);
}
