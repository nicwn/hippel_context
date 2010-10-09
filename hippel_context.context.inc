<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function hippel_context_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'idea-view';
  $context->description = '';
  $context->tag = 'Open Hippel, Hippel Context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'idea' => 'idea',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'node_author' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'other',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'hippel_idea-hippel-idea-vote-result' => array(
          'module' => 'hippel_idea',
          'delta' => 'hippel-idea-vote-result',
          'region' => 'lead',
          'weight' => 0,
        ),
        'views-ca97c5b8f4f6f6be233af8f62371da82' => array(
          'module' => 'views',
          'delta' => 'ca97c5b8f4f6f6be233af8f62371da82',
          'region' => 'lead',
          'weight' => 1,
        ),
        'quicktabs-hippel_idea_voice_forms' => array(
          'module' => 'quicktabs',
          'delta' => 'hippel_idea_voice_forms',
          'region' => 'content',
          'weight' => 0,
        ),
        'quicktabs-hippel_voices' => array(
          'module' => 'quicktabs',
          'delta' => 'hippel_voices',
          'region' => 'content',
          'weight' => 1,
        ),
        'hippel_idea-hippel-idea-vote' => array(
          'module' => 'hippel_idea',
          'delta' => 'hippel-idea-vote',
          'region' => 'right',
          'weight' => 0,
        ),
        'hippel_idea-hippel-idea-flag' => array(
          'module' => 'hippel_idea',
          'delta' => 'hippel-idea-flag',
          'region' => 'right',
          'weight' => 1,
        ),
        'author_pane-0' => array(
          'module' => 'author_pane',
          'delta' => 0,
          'region' => 'right',
          'weight' => 2,
        ),
        'sharethis-sharethis' => array(
          'module' => 'sharethis',
          'delta' => 'sharethis',
          'region' => 'right',
          'weight' => 3,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Open Hippel, Hippel Context');

  $export['idea-view'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'idea-view-author';
  $context->description = '';
  $context->tag = 'Open Hippel, Hippel Context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'idea' => 'idea',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'node_author' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'author',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'hippel_idea-hippel-idea-vote-result' => array(
          'module' => 'hippel_idea',
          'delta' => 'hippel-idea-vote-result',
          'region' => 'lead',
          'weight' => 0,
        ),
        'views-ca97c5b8f4f6f6be233af8f62371da82' => array(
          'module' => 'views',
          'delta' => 'ca97c5b8f4f6f6be233af8f62371da82',
          'region' => 'lead',
          'weight' => 1,
        ),
        'quicktabs-hippel_idea_voice_forms' => array(
          'module' => 'quicktabs',
          'delta' => 'hippel_idea_voice_forms',
          'region' => 'content',
          'weight' => 0,
        ),
        'quicktabs-hippel_voices' => array(
          'module' => 'quicktabs',
          'delta' => 'hippel_voices',
          'region' => 'content',
          'weight' => 1,
        ),
        'hippel_idea-hippel-idea-vote' => array(
          'module' => 'hippel_idea',
          'delta' => 'hippel-idea-vote',
          'region' => 'right',
          'weight' => 0,
        ),
        'hippel_idea-hippel-idea-flag' => array(
          'module' => 'hippel_idea',
          'delta' => 'hippel-idea-flag',
          'region' => 'right',
          'weight' => 1,
        ),
        'author_pane-0' => array(
          'module' => 'author_pane',
          'delta' => 0,
          'region' => 'right',
          'weight' => 2,
        ),
        'sharethis-sharethis' => array(
          'module' => 'sharethis',
          'delta' => 'sharethis',
          'region' => 'right',
          'weight' => 3,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Open Hippel, Hippel Context');

  $export['idea-view-author'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ideas-grid';
  $context->description = 'A grid of all published ideas.';
  $context->tag = 'Open Hippel, Hippel Context';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'ideas' => 'ideas',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'hippel_idea-hippel-idea-help' => array(
          'module' => 'hippel_idea',
          'delta' => 'hippel-idea-help',
          'region' => 'banner',
          'weight' => 0,
        ),
        'hippel_idea-hippel-idea-submit' => array(
          'module' => 'hippel_idea',
          'delta' => 'hippel-idea-submit',
          'region' => 'banner',
          'weight' => 1,
        ),
        'quicktabs-ideas' => array(
          'module' => 'quicktabs',
          'delta' => 'ideas',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('A grid of all published ideas.');
  t('Open Hippel, Hippel Context');

  $export['ideas-grid'] = $context;
  return $export;
}
