<?php

/**
 * Implementation of hook_input_formats().
 */
function wysiwyg_starter_input_formats() {
  $input_formats = array();

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Filtered HTML';
  $input_format->roles = array(
    1 => 'anonymous user',
    2 => 'authenticated user',
  );
  $input_format->cache = FALSE;
  $input_format->settings = array(
  );
  $input_format->filters = array(
    'filter' => array(
      // Delta => Weight for: URL filter
      '2' => '10',
    ),
    'image_caption_filter' => array(
      // Delta => Weight for: Image caption filter
      '0' => '10',
    ),
    'shortcode' => array(
      // Delta => Weight for: Shortcodes
      '0' => '10',
      // Delta => Weight for: Shortcodes - html corrector
      '1' => '10',
    ),
    'wysiwyg_filter' => array(
      // Delta => Weight for: WYSIWYG Filter
      '0' => '10',
    ),
  );
  $input_format->machine = 'filtered_html';
  $input_formats['filtered_html'] = $input_format;

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Filtered HTML TinyMCE';
  $input_format->roles = array();
  $input_format->cache = TRUE;
  $input_format->settings = array(
  );
  $input_format->filters = array(
    'filter' => array(
      // Delta => Weight for: URL filter
      '2' => '10',
      // Delta => Weight for: HTML corrector
      '3' => '10',
    ),
    'image_caption_filter' => array(
      // Delta => Weight for: Image caption filter
      '0' => '10',
    ),
    'wysiwyg_filter' => array(
      // Delta => Weight for: WYSIWYG Filter
      '0' => '10',
    ),
  );
  $input_format->machine = 'filtered_html_tinymce';
  $input_formats['filtered_html_tinymce'] = $input_format;

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Full HTML';
  $input_format->roles = array();
  $input_format->cache = FALSE;
  $input_format->settings = array(
  );
  $input_format->filters = array(
    'filter' => array(
      '2' => '0',
    ),
    'image_caption_filter' => array(
      '0' => '10',
    ),
    'shortcode' => array(
      '0' => '10',
      '1' => '10',
    ),
  );
  $input_format->machine = 'full_html';
  $input_formats['full_html'] = $input_format;

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Full HTML TinyMCE';
  $input_format->roles = array();
  $input_format->cache = TRUE;
  $input_format->settings = array(
    // Settings for: filter module
    'filter' => array(
      'filter_url_length' => '72',
    ),
  );
  $input_format->filters = array(
    'filter' => array(
      '2' => '0',
      '3' => '10',
    ),
    'image_caption_filter' => array(
      '0' => '10',
    ),
  );
  $input_format->machine = 'full_html_tinymce';
  $input_formats['full_html_tinymce'] = $input_format;

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Comments';
  $input_format->roles = array(
    1 => 'anonymous user',
  );
  $input_format->cache = TRUE;
  $input_format->settings = array(
    // Settings for: filter module
    'filter' => array(
      'filter_html' => '1',
      'allowed_html' => '<a> <em> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd>',
      'filter_html_help' => 1,
      'filter_html_nofollow' => 1,
    ),
  );
  $input_format->filters = array(
    'filter' => array(
      '2' => '0',
      '0' => '10',
      '3' => '10',
    ),
  );
  $input_format->machine = 'comments';
  $input_formats['comments'] = $input_format;

  return $input_formats;

}
