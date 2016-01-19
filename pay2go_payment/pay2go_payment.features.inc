<?php
/**
 * @file
 * pay2go_payment.features.inc
 */

/**
 * Implements hook_views_api().
 */
function pay2go_payment_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pay2go_payment_node_info() {
  $items = array(
    'pay2go_payment_record' => array(
      'name' => t('交易紀錄'),
      'base' => 'node_content',
      'description' => t('智付寶交易紀錄'),
      'has_title' => '1',
      'title_label' => t('交易序號'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
