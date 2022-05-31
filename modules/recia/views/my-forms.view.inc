<?php
  function my_forms_view_loader(){
    $view = new view();
    $view->name = 'my_forms';
    $view->description = '';
    $view->tag = 'recia';
    $view->base_table = 'webform';
    $view->human_name = 'Mes formulaires';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Mes formulaires';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['use_more_text'] = 'plus';
    $handler->display->display_options['access']['type'] = 'none';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
    $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
    $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '10';
    $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
    $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
    $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
    $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
    $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
    $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
    $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
    $handler->display->display_options['style_plugin'] = 'table';
    /* Comportement en l'absence de résultats: Global : Texte non filtré */
    $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
    $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
    $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
    $handler->display->display_options['empty']['area_text_custom']['label'] = 'Mes formulaires';
    $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
    $handler->display->display_options['empty']['area_text_custom']['content'] = 'Vous n\'avez pas encore créé de formulaire';
      /* Relation: Webform : Nœud */
    $handler->display->display_options['relationships']['nid']['id'] = 'nid';
    $handler->display->display_options['relationships']['nid']['table'] = 'webform';
    $handler->display->display_options['relationships']['nid']['field'] = 'nid';
    $handler->display->display_options['relationships']['nid']['required'] = TRUE;
    /* Relation: Contenu : Auteur du contenu */
    $handler->display->display_options['relationships']['uid']['id'] = 'uid';
    $handler->display->display_options['relationships']['uid']['table'] = 'node';
    $handler->display->display_options['relationships']['uid']['field'] = 'uid';
    $handler->display->display_options['relationships']['uid']['relationship'] = 'nid';
    $handler->display->display_options['relationships']['uid']['required'] = TRUE;
    /* Champ: Contenu : Titre */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['relationship'] = 'nid';
    /* Champ: Contenu : Date de publication */
    $handler->display->display_options['fields']['created']['id'] = 'created';
    $handler->display->display_options['fields']['created']['table'] = 'node';
    $handler->display->display_options['fields']['created']['field'] = 'created';
    $handler->display->display_options['fields']['created']['relationship'] = 'nid';
    $handler->display->display_options['fields']['created']['label'] = 'Date de création';
    $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['created']['empty'] = '-';
    $handler->display->display_options['fields']['created']['hide_empty'] = TRUE;
    $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
    $handler->display->display_options['fields']['created']['date_format'] = 'short';
    $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
    $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
    /* Champ: Contenu : Date de mise à jour */
    $handler->display->display_options['fields']['changed']['id'] = 'changed';
    $handler->display->display_options['fields']['changed']['table'] = 'node';
    $handler->display->display_options['fields']['changed']['field'] = 'changed';
    $handler->display->display_options['fields']['changed']['relationship'] = 'nid';
    /* Champ: Webform : État */
    $handler->display->display_options['fields']['status']['id'] = 'status';
    $handler->display->display_options['fields']['status']['table'] = 'webform';
    $handler->display->display_options['fields']['status']['field'] = 'status';
    /* Champ: Contenu : Lien pour modifier le contenu */
    $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['relationship'] = 'nid';
    $handler->display->display_options['fields']['edit_node']['label'] = 'Modifier';
    $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
    $handler->display->display_options['fields']['edit_node']['alter']['alt'] = 'Modifier';
    /* Champ: Contenu : Lien pour supprimer le contenu */
    $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
    $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
    $handler->display->display_options['fields']['delete_node']['relationship'] = 'nid';
    $handler->display->display_options['fields']['delete_node']['label'] = 'Supprimer';
    $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = TRUE;
    $handler->display->display_options['fields']['delete_node']['alter']['alt'] = 'Supprimer';
    /* Critère de filtrage: Accès au contenu : Accès */
    $handler->display->display_options['filters']['nid']['id'] = 'nid';
    $handler->display->display_options['filters']['nid']['table'] = 'node_access';
    $handler->display->display_options['filters']['nid']['field'] = 'nid';
    $handler->display->display_options['filters']['nid']['relationship'] = 'nid';
    /* Critère de filtrage: Utilisateur : Actuel */
    $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
    $handler->display->display_options['filters']['uid_current']['table'] = 'users';
    $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
    $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
    $handler->display->display_options['filters']['uid_current']['value'] = '1';

    $translatables['recia-my-forms'] = array(
      t('Master'),
      t('Mes Formulaires'),
      t('plus'),
      t('Appliquer'),
      t('Réinitialiser'),
      t('Trier par'),
      t('Asc'),
      t('Desc'),
      t('Éléments par page'),
      t('- Tout -'),
      t('Décalage'),
      t('« premier'),
      t('‹ précédent'),
      t('suivant ›'),
      t('dernier »'),
      t('Nœud pour webform'),
      t('auteur'),
      t('Titre'),
      t('Date de création'),
      t('-'),
      t('Date de mise à jour'),
      t('État'),
      t('Modifier'),
      t('Supprimer'),
      t('Page'),
      t('Block'),
    );
    return $view;
  }


?>
