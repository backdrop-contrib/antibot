<?php

/**
 * Admin settings form.
 */
function antibot_admin_settings($form, &$form_state) {
  $form['message'] = array(
    '#type' => 'html_tag',
    '#tag' => 'h3',
    '#value' => t('Antibot requires that a user has Javascript enabled in order to use and submit a given form.'),
  );
  $form['antibot_form_ids'] = array(
    '#type' => 'textarea',
    '#title' => t('Form IDs'),
    '#default_value' => antibot_active_form_ids(),
    '#description' => t('Specify the form IDs that should be protected by Antibot. Each form ID should be on a separate line. Wildcard (*) characters can be used.'),
  );
  
  return system_settings_form($form);
}
