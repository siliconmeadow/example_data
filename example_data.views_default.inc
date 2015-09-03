<?php
/**
 * @file
 * rml_tracked_return_retailer.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function example_data_views_default_views() {
  $view = new view;
  $view->name = 'retailer_list';
  $view->description = 'Retailer list';
  $view->tag = 'data table';
  $view->base_table = 'example_data';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Default', 'default');
  $handler->override_option('fields', array(
    'id' => array(
      'label' => 'id',
      'id' => 'id',
      'table' => 'example_data',
      'field' => 'id',
      'exclude' => 0,
      'relationship' => 'none',
    ),
    'name' => array(
      'label' => 'name',
      'id' => 'name',
      'table' => 'example_data',
      'field' => 'name',
      'exclude' => 0,
      'relationship' => 'none',
    ),
    'url' => array(
      'label' => 'url',
      'id' => 'url',
      'table' => 'example_data',
      'field' => 'url',
      'exclude' => 0,
      'relationship' => 'none',
    ),
    'account_number' => array(
      'label' => 'account_number',
      'id' => 'account_number',
      'table' => 'example_data',
      'field' => 'account_number',
      'exclude' => 0,
      'relationship' => 'none',
    ),
    'service_id' => array(
      'label' => 'service_id',
      'id' => 'service_id',
      'table' => 'example_data',
      'field' => 'service_id',
      'exclude' => 0,
      'relationship' => 'none',
    ),
    'email' => array(
      'label' => 'email',
      'id' => 'email',
      'table' => 'example_data',
      'field' => 'email',
      'exclude' => 0,
      'relationship' => 'none',
    ),
    'status' => array(
      'label' => 'status',
      'id' => 'status',
      'table' => 'example_data',
      'field' => 'status',
      'exclude' => 0,
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'name' => array(
      'id' => 'name',
      'table' => 'example_data',
      'field' => 'name',
    ),
    'service_id' => array(
      'id' => 'service_id',
      'table' => 'example_data',
      'field' => 'service_id',
    ),
    'status' => array(
      'id' => 'status',
      'table' => 'example_data',
      'field' => 'status',
    ),
  ));
  $handler->override_option('arguments', array(
    'id' => array(
      'default_action' => 'ignore',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => 'Example data %1',
      'id' => 'id',
      'table' => 'example_data',
      'field' => 'id',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Example data');
  $handler->override_option('empty', 'There is no data in this table.');
  $handler->override_option('empty_format', '1');
  $handler->override_option('items_per_page', 50);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 1,
    'order' => 'asc',
    'columns' => array(
      'id' => 'id',
      'name' => 'name',
      'url' => 'url',
      'account_number' => 'account_number',
      'service_id' => 'service_id',
      'message' => 'message',
      'address_line1' => 'address_line1',
      'address_line2' => 'address_line2',
      'address_line3' => 'address_line3',
      'address_line4' => 'address_line4',
      'town' => 'town',
      'postcode' => 'postcode',
      'country' => 'country',
      'email' => 'email',
      'status' => 'status',
    ),
    'info' => array(
      'id' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'name' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'url' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'account_number' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'service_id' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'message' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'address_line1' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'address_line2' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'address_line3' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'address_line4' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'town' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'postcode' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'country' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'email' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'status' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => -1,
  ));
  $handler = $view->new_display('page', 'Full view', 'page_1');
  $handler->override_option('path', 'retailers-full-view');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Example data',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('page', 'Realistic view', 'page_2');
  $handler->override_option('fields', array(
    'id' => array(
      'label' => 'id',
      'id' => 'id',
      'table' => 'example_data',
      'field' => 'id',
      'exclude' => 0,
      'relationship' => 'none',
    ),
    'name' => array(
      'label' => 'Retailer',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'exclude' => 0,
      'id' => 'name',
      'table' => 'example_data',
      'field' => 'name',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'url' => array(
      'label' => 'Web site',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'exclude' => 0,
      'id' => 'url',
      'table' => 'example_data',
      'field' => 'url',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'account_number' => array(
      'label' => 'Account number',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'exclude' => 0,
      'id' => 'account_number',
      'table' => 'example_data',
      'field' => 'account_number',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'service_id' => array(
      'label' => 'Service level',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'exclude' => 0,
      'id' => 'service_id',
      'table' => 'example_data',
      'field' => 'service_id',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'email' => array(
      'label' => 'Main email',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'exclude' => 0,
      'id' => 'email',
      'table' => 'example_data',
      'field' => 'email',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'status' => array(
      'label' => 'Status',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'format_plural' => 0,
      'format_plural_singular' => '1',
      'format_plural_plural' => '@count',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'status',
      'table' => 'example_data',
      'field' => 'status',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
  ));
  $handler->override_option('sorts', array(
    'name' => array(
      'id' => 'name',
      'table' => 'example_data',
      'field' => 'name',
    ),
    'service_id' => array(
      'order' => 'ASC',
      'id' => 'service_id',
      'table' => 'example_data',
      'field' => 'service_id',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'status' => array(
      'order' => 'ASC',
      'id' => 'status',
      'table' => 'example_data',
      'field' => 'status',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Retailer list');
  $handler->override_option('path', 'retailer-list');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
