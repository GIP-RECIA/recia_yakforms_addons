<?php
/********************
* Module admin page
********************/

/**
 * Add admin page to menu
 */
function reciaforms_menu() {
  $items['admin/config/system/recia'] = array(
    'title' => 'Recia module',
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
  
  $casDomList = variable_get('reciaforms_cas_direct_access_domains',[]);
  $form['reciaforms_cas']['reciaforms_cas_direct_access_domains'] = array(
    '#type' => 'textarea',
    '#title' => $t('Domains list'),
    '#default_value' => implode("\n",$casDomList),
  );

  
  $form['#submit'][] = 'reciaforms_form_submit';

  return system_settings_form($form);
}

/**
 * Admin page save datas
 */
function reciaforms_form_submit($form, &$form_state) {
  $casDomList = $casDomList = variable_get('reciaforms_cas_direct_access_domains',[]);
  if(is_string($casDomList))variable_set('reciaforms_cas_direct_access_domains',explode("\n",$casDomList));
}