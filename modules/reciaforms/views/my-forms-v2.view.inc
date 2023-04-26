<?php
  function my_forms_2_view_loader(){
    $view = new view();
    $view->name = 'reciaforms_mes_formulaires';
    $view->description = '';
    $view->tag = 'ReciaForms';
    $view->base_table = 'node';
    $view->human_name = 'ReciaForms : Mes formulaires';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = false; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Mes formulaires';
    $handler->display->display_options['use_ajax'] = true;
    $handler->display->display_options['use_more_always'] = false;
    $handler->display->display_options['use_more_text'] = 'plus';
    $handler->display->display_options['access']['type'] = 'perm';
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
    /* Comportement en l'absence de résultats: Entité : Entité rendue */
    $handler->display->display_options['empty']['entity']['id'] = 'entity';
    $handler->display->display_options['empty']['entity']['table'] = 'entity__global';
    $handler->display->display_options['empty']['entity']['field'] = 'entity';
    $handler->display->display_options['empty']['entity']['label'] = 'Aucun résultat';
    $handler->display->display_options['empty']['entity']['empty'] = true;
    $handler->display->display_options['empty']['entity']['bypass_access'] = 0;
    /* Relation: Contenu : Auteur du contenu */
    $handler->display->display_options['relationships']['uid']['id'] = 'uid';
    $handler->display->display_options['relationships']['uid']['table'] = 'node';
    $handler->display->display_options['relationships']['uid']['field'] = 'uid';
    $handler->display->display_options['relationships']['uid']['required'] = true;
    /* Champ: Contenu : Titre */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = false;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = false;
    /* Champ: Contenu : Date de mise à jour */
    $handler->display->display_options['fields']['changed']['id'] = 'changed';
    $handler->display->display_options['fields']['changed']['table'] = 'node';
    $handler->display->display_options['fields']['changed']['field'] = 'changed';
    $handler->display->display_options['fields']['changed']['label'] = 'Dernière mise à jour';
    $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
    $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
    $handler->display->display_options['fields']['changed']['format_date_sql'] = 0;
    /* Champ: Vues : Views Conditional */
    $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
    $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
    $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
    $handler->display->display_options['fields']['views_conditional']['label'] = 'Expiration';
    $handler->display->display_options['fields']['views_conditional']['if'] = 'field_form1_expiration';
    $handler->display->display_options['fields']['views_conditional']['condition'] = '4';
    $handler->display->display_options['fields']['views_conditional']['equalto'] = date("Y-m-d H:i:s");
    $handler->display->display_options['fields']['views_conditional']['then'] = 'Expiré';
    $handler->display->display_options['fields']['views_conditional']['or'] = '[field_form1_expiration]';
    $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
    /* Champ: Contenu : Lien pour modifier le contenu */
    $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['label'] = 'Modifier';
    /* Champ: Contenu : Lien pour supprimer le contenu */
    $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
    $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
    $handler->display->display_options['fields']['delete_node']['label'] = 'Supprimer';
    /* Critère de tri: Contenu : Date de publication */
    $handler->display->display_options['sorts']['created']['id'] = 'created';
    $handler->display->display_options['sorts']['created']['table'] = 'node';
    $handler->display->display_options['sorts']['created']['field'] = 'created';
    $handler->display->display_options['sorts']['created']['order'] = 'DESC';
    /* Critère de filtrage: Contenu : Type */
    $handler->display->display_options['filters']['type']['id'] = 'type';
    $handler->display->display_options['filters']['type']['table'] = 'node';
    $handler->display->display_options['filters']['type']['field'] = 'type';
    $handler->display->display_options['filters']['type']['value'] = array(
    'form1' => 'form1',
    );
    /* Critère de filtrage: Contenu : Titre */
    $handler->display->display_options['filters']['title']['id'] = 'title';
    $handler->display->display_options['filters']['title']['table'] = 'node';
    $handler->display->display_options['filters']['title']['field'] = 'title';
    $handler->display->display_options['filters']['title']['operator'] = 'contains';
    $handler->display->display_options['filters']['title']['exposed'] = true;
    $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
    $handler->display->display_options['filters']['title']['expose']['label'] = 'Rechercher';
    $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
    $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
    $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    );
    /* Critère de filtrage: Utilisateur : Actuel */
    $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
    $handler->display->display_options['filters']['uid_current']['table'] = 'users';
    $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
    $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
    $handler->display->display_options['filters']['uid_current']['value'] = '1';

    /* Display: Page */
    $handler = $view->new_display('page', 'Page', 'page');
    $handler->display->display_options['path'] = 'reciaforms-mes-formulaires';

    /* Display: Block */
    $handler = $view->new_display('block', 'Block', 'block');
    $handler->display->display_options['defaults']['pager'] = false;
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '5';
    $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
    $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
    $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
    $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
    $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
    $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
    $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
    $translatables['reciaforms_mes_formulaires'] = array(
    t('Master'),
    t('Mes formulaires'),
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
    t('Aucun résultat'),
    t('auteur'),
    t('Titre'),
    t('Dernière mise à jour'),
    t('Expiration'),
    t('Modifier'),
    t('Supprimer'),
    t('Rechercher'),
    t('Page'),
    t('Block'),
    );
}
?>
