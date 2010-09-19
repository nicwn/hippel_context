<?php
// $Id$

/**
 * @file
 *  Expose node view/node form author role as a context condition.
 */
class hippel_context_condition_node_author extends context_condition_node {
  function condition_values() {
    $values = array();
    $values['view'] = t('Current user');
    return $values;
  }

  function options_form($context) {
    $defaults = $this->fetch_from_context($context, 'options');
    return array(
      'mode' => array(
        '#title' => t('Active if'),
        '#type' => 'select',
        '#options' => array(
          'author' => t('Selected user is the node author'),
          'other' => t('Selected user is not the node author'),
        ),
        '#default_value' => isset($defaults['mode']) ? $defaults['mode'] : 'author',
      ),
    );
  }

  function execute($node, $op) {
    global $user;
    foreach ($this->get_contexts($op) as $context) {
      $options = $this->fetch_from_context($context, 'options');
      $mode = $options['mode'];
      switch ($options['mode']) {
        case 'other':
          if ($node->uid != $user->uid) {
            $this->condition_met($context);
          }
          break;
        case 'author':
          if ($node->uid == $user->uid) {
            $this->condition_met($context);
          }
          break;
      }
    }
  }
}
