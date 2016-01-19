<?php
/**
 * @file
 * pay2go_payment.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pay2go_payment_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'workbench_pay2go_payment';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '(workbench)交易紀錄';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '交易紀錄';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '交易序號';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: EscrowBank */
  $handler->display->display_options['fields']['field_escrowbank']['id'] = 'field_escrowbank';
  $handler->display->display_options['fields']['field_escrowbank']['table'] = 'field_data_field_escrowbank';
  $handler->display->display_options['fields']['field_escrowbank']['field'] = 'field_escrowbank';
  /* Field: Content: IP */
  $handler->display->display_options['fields']['field_ip']['id'] = 'field_ip';
  $handler->display->display_options['fields']['field_ip']['table'] = 'field_data_field_ip';
  $handler->display->display_options['fields']['field_ip']['field'] = 'field_ip';
  /* Field: Content: PaymentType */
  $handler->display->display_options['fields']['field_paymenttype']['id'] = 'field_paymenttype';
  $handler->display->display_options['fields']['field_paymenttype']['table'] = 'field_data_field_paymenttype';
  $handler->display->display_options['fields']['field_paymenttype']['field'] = 'field_paymenttype';
  $handler->display->display_options['fields']['field_paymenttype']['label'] = '付款類型';
  /* Field: Content: PayTime */
  $handler->display->display_options['fields']['field_paytime']['id'] = 'field_paytime';
  $handler->display->display_options['fields']['field_paytime']['table'] = 'field_data_field_paytime';
  $handler->display->display_options['fields']['field_paytime']['field'] = 'field_paytime';
  $handler->display->display_options['fields']['field_paytime']['label'] = '付款時間';
  $handler->display->display_options['fields']['field_paytime']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: transaction id */
  $handler->display->display_options['fields']['field_transaction_id']['id'] = 'field_transaction_id';
  $handler->display->display_options['fields']['field_transaction_id']['table'] = 'field_data_field_transaction_id';
  $handler->display->display_options['fields']['field_transaction_id']['field'] = 'field_transaction_id';
  $handler->display->display_options['fields']['field_transaction_id']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pay2go_payment_record' => 'pay2go_payment_record',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = '交易序號';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: PaymentType (field_paymenttype) */
  $handler->display->display_options['filters']['field_paymenttype_value']['id'] = 'field_paymenttype_value';
  $handler->display->display_options['filters']['field_paymenttype_value']['table'] = 'field_data_field_paymenttype';
  $handler->display->display_options['filters']['field_paymenttype_value']['field'] = 'field_paymenttype_value';
  $handler->display->display_options['filters']['field_paymenttype_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_paymenttype_value']['expose']['operator_id'] = 'field_paymenttype_value_op';
  $handler->display->display_options['filters']['field_paymenttype_value']['expose']['label'] = '付款類型';
  $handler->display->display_options['filters']['field_paymenttype_value']['expose']['operator'] = 'field_paymenttype_value_op';
  $handler->display->display_options['filters']['field_paymenttype_value']['expose']['identifier'] = 'field_paymenttype_value';
  $handler->display->display_options['filters']['field_paymenttype_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/workbench/pay2go';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '交易紀錄';
  $handler->display->display_options['menu']['name'] = 'management';
  $translatables['workbench_pay2go_payment'] = array(
    t('Master'),
    t('交易紀錄'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('交易序號'),
    t('EscrowBank'),
    t('IP'),
    t('付款類型'),
    t('付款時間'),
    t('transaction id'),
    t('Page'),
  );
  $export['workbench_pay2go_payment'] = $view;

  return $export;
}
