<?php
/********************
* Module admin page
********************/

/**
 * Add admin page to menu
 */
function reciaforms_menu() {
  watchdog('ReciaForms','admin.inc loaded');
  $items['admin/config/system/reciaforms'] = array(
    'title' => 'ReciaForms module',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('reciaforms_form'),
    'access arguments' => array('administer users'),
    'type' => MENU_NORMAL_ITEM,
  );

  return $items;
}

/**
 * Admin page définition
 */
function reciaforms_form($form, &$form_state) {
  /* Cas configuration extend */
  $form['reciaforms_cas'] = array(
    '#type' => 'fieldset',
    '#title' => t('Cas additional parameters'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,  
  );
  
  $form['reciaforms_cas']['reciaforms_cas_direct_access_domains'] = array(
    '#type' => 'textarea',
    '#title' => t('Direct access domains list'),
    '#default_value' => variable_get('reciaforms_cas_direct_access_domains',''),
  );

  return system_settings_form($form);
}


?>