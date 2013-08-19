<?php

/**
 * Implements hook_views_data().
 * 
 * Tables are described to Views via hook_views_data(), which returns an array
 * of table information, keyed by the name of the table.
 */
function urban_airship_views_data() {
  $data = array();

  /**
   * Expose urban_airship_push_notification table to views.
   */
  $data['urban_airship_push_notification']['table'] = array(
    'group' => 'Urban Airship notification',
    'base' => array(
      'field' => array('id', 'id'),
      'title' => 'UA notification',
      'help' => 'The notification',
    ),
  );
  $data['urban_airship_push_notification']['id'] = array(
    'title' => 'UA id',
    'help' => 'Contains the UA id of a notification.',
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
      'allow empty' => TRUE,
      'help' => 'Filter on UA id field.',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
      'numeric' => TRUE,
      'validate type' => 'nid',
      'help' => 'Argument on a UA id field.',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
      'help' => 'Sort UA id field.',
    ),
  );
  $data['urban_airship_push_notification']['created'] = array(
    'title' => t('Time'),
    'help' => t('The time the notification was sent.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );
  $data['urban_airship_push_notification']['notification'] = array(
    'title' => 'Notification',
    'help' => 'The notification that was sent.',
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
  );
  return $data;
}
