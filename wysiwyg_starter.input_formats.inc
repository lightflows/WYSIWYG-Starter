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
  $input_format->cache = TRUE;
  $input_format->settings = array(
    // Settings for: filter module
    'filter' => array(
      // Maximum link text length
      'filter_url_length' => '72',
    ),
    // Settings for: wysiwyg_filter module
    'wysiwyg_filter' => array(
      // HTML elements and attributes
      'wysiwyg_filter_valid_elements_raw' => 'a[!href|target<_blank|title],
div[align<center?justify?left?right],
p[align<center?justify?left?right],
br,span,em,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
iframe[*],
img[*]',
      // HTML comments
      'wysiwyg_filter_allow_comments' => '0',
      // Color and background properties
      'wysiwyg_filter_styles_color' => array(
          'color' => 0,
          'background' => 0,
          'background-color' => 0,
          'background-image' => 0,
          'background-repeat' => 0,
          'background-attachment' => 0,
          'background-position' => 0,
        ),
      // Font properties
      'wysiwyg_filter_styles_font' => array(
          'font' => 0,
          'font-family' => 0,
          'font-size' => 0,
          'font-size-adjust' => 0,
          'font-stretch' => 0,
          'font-style' => 0,
          'font-variant' => 0,
          'font-weight' => 0,
        ),
      // Text properties
      'wysiwyg_filter_styles_text' => array(
          'text-align' => 'text-align',
          'text-decoration' => 'text-decoration',
          'text-indent' => 'text-indent',
          'text-transform' => 0,
          'letter-spacing' => 0,
          'word-spacing' => 0,
          'white-space' => 0,
          'direction' => 0,
          'unicode-bidi' => 0,
        ),
      // Box properties
      'wysiwyg_filter_styles_box' => array(
          'margin' => 'margin',
          'margin-top' => 'margin-top',
          'margin-right' => 'margin-right',
          'margin-bottom' => 'margin-bottom',
          'margin-left' => 'margin-left',
          'padding' => 'padding',
          'padding-top' => 'padding-top',
          'padding-right' => 'padding-right',
          'padding-bottom' => 'padding-bottom',
          'padding-left' => 'padding-left',
        ),
      // Border properties (1)
      'wysiwyg_filter_styles_border-1' => array(
          'border' => 'border',
          'border-top' => 'border-top',
          'border-right' => 'border-right',
          'border-bottom' => 'border-bottom',
          'border-left' => 'border-left',
          'border-width' => 'border-width',
          'border-top-width' => 'border-top-width',
          'border-right-width' => 'border-right-width',
          'border-bottom-width' => 'border-bottom-width',
          'border-left-width' => 'border-left-width',
        ),
      // Border properties (2)
      'wysiwyg_filter_styles_border-2' => array(
          'border-color' => 'border-color',
          'border-top-color' => 'border-top-color',
          'border-right-color' => 'border-right-color',
          'border-bottom-color' => 'border-bottom-color',
          'border-left-color' => 'border-left-color',
          'border-style' => 'border-style',
          'border-top-style' => 'border-top-style',
          'border-right-style' => 'border-right-style',
          'border-bottom-style' => 'border-bottom-style',
          'border-left-style' => 'border-left-style',
        ),
      // Dimension properties
      'wysiwyg_filter_styles_dimension' => array(
          'height' => 'height',
          'line-height' => 'line-height',
          'width' => 'width',
          'max-height' => 0,
          'max-width' => 0,
          'min-height' => 0,
          'min-width' => 0,
        ),
      // Positioning properties
      'wysiwyg_filter_styles_positioning' => array(
          'bottom' => 'bottom',
          'left' => 'left',
          'overflow' => 'overflow',
          'right' => 'right',
          'top' => 'top',
          'z-index' => 'z-index',
          'clip' => 0,
          'vertical-align' => 0,
        ),
      // Layout properties
      'wysiwyg_filter_styles_layout' => array(
          'clear' => 'clear',
          'display' => 'display',
          'float' => 'float',
          'position' => 'position',
          'visibility' => 'visibility',
        ),
      // List properties
      'wysiwyg_filter_styles_list' => array(
          'list-style' => 'list-style',
          'list-style-image' => 0,
          'list-style-position' => 0,
          'list-style-type' => 0,
        ),
      // Table properties
      'wysiwyg_filter_styles_table' => array(
          'border-collapse' => 0,
          'border-spacing' => 0,
          'caption-side' => 0,
          'empty-cells' => 0,
          'table-layout' => 0,
        ),
      // User interface properties
      'wysiwyg_filter_styles_user' => array(
          'cursor' => 0,
          'outline' => 0,
          'outline-width' => 0,
          'outline-style' => 0,
          'outline-color' => 0,
          'zoom' => 0,
        ),
      // Rules for Class Names
      'wysiwyg_filter_valid_classes' => array(
          0 => 'caption',
        ),
      // Rules for Element IDs
      'wysiwyg_filter_valid_ids' => array(),
      // Rules for URLs used within inline styles
      'wysiwyg_filter_style_urls' => array(),
      // Policy
      'wysiwyg_filter_nofollow_policy' => 'disabled',
      // Domains list
      'wysiwyg_filter_nofollow_domains' => array(),
      // Valid elements parsed
      'wysiwyg_filter_valid_elements_parsed' => array(
          'a' => array(
            'href' => array(
              'required' => TRUE,
            ),
            'target' => array(
              'values' => array(
                0 => '_blank',
              ),
            ),
            'title' => array(),
          ),
          'blockquote' => array(),
          'br' => array(),
          'cite' => array(),
          'code' => array(),
          'dd' => array(),
          'div' => array(
            'align' => array(
              'values' => array(
                0 => 'center',
                1 => 'justify',
                2 => 'left',
                3 => 'right',
              ),
            ),
          ),
          'dl' => array(),
          'dt' => array(),
          'em' => array(),
          'iframe' => array(
            '*' => array(),
          ),
          'img' => array(
            '*' => array(),
          ),
          'li' => array(),
          'ol' => array(),
          'p' => array(
            'align' => array(
              'values' => array(
                0 => 'center',
                1 => 'justify',
                2 => 'left',
                3 => 'right',
              ),
            ),
          ),
          'span' => array(),
          'strong' => array(),
          'ul' => array(),
        ),
    ),
  );
  $input_format->filters = array(
    'filter' => array(
      // Delta => Weight for: URL filter
      '2' => '0',
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
  $input_format->machine = 'filtered_html';
  $input_formats['filtered_html'] = $input_format;

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Full HTML';
  $input_format->roles = array();
  $input_format->cache = FALSE;
  $input_format->settings = array(
  );
  $input_format->filters = array(
    'filter' => array(
      // Delta => Weight for: URL filter
      '2' => '0',
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
  );
  $input_format->machine = 'full_html';
  $input_formats['full_html'] = $input_format;

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Filtered HTML TinyMCE';
  $input_format->roles = array();
  $input_format->cache = TRUE;
  $input_format->settings = array(
    // Settings for: filter module
    'filter' => array(
      // Maximum link text length
      'filter_url_length' => '72',
    ),
    // Settings for: wysiwyg_filter module
    'wysiwyg_filter' => array(
      // HTML elements and attributes
      'wysiwyg_filter_valid_elements_raw' => 'a[!href|target<_blank|title],
div[align<center?justify?left?right],
p[align<center?justify?left?right],
br,span,em,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
iframe[*],
img[*]',
      // HTML comments
      'wysiwyg_filter_allow_comments' => '0',
      // Color and background properties
      'wysiwyg_filter_styles_color' => array(
          'background-image' => 'background-image',
          'background-position' => 'background-position',
          'color' => 0,
          'background' => 0,
          'background-color' => 0,
          'background-repeat' => 0,
          'background-attachment' => 0,
        ),
      // Font properties
      'wysiwyg_filter_styles_font' => array(
          'font' => 0,
          'font-family' => 0,
          'font-size' => 0,
          'font-size-adjust' => 0,
          'font-stretch' => 0,
          'font-style' => 0,
          'font-variant' => 0,
          'font-weight' => 0,
        ),
      // Text properties
      'wysiwyg_filter_styles_text' => array(
          'text-align' => 'text-align',
          'text-decoration' => 'text-decoration',
          'text-indent' => 'text-indent',
          'text-transform' => 0,
          'letter-spacing' => 0,
          'word-spacing' => 0,
          'white-space' => 0,
          'direction' => 0,
          'unicode-bidi' => 0,
        ),
      // Box properties
      'wysiwyg_filter_styles_box' => array(
          'margin' => 'margin',
          'margin-top' => 'margin-top',
          'margin-right' => 'margin-right',
          'margin-bottom' => 'margin-bottom',
          'margin-left' => 'margin-left',
          'padding' => 'padding',
          'padding-top' => 'padding-top',
          'padding-right' => 'padding-right',
          'padding-bottom' => 'padding-bottom',
          'padding-left' => 'padding-left',
        ),
      // Border properties (1)
      'wysiwyg_filter_styles_border-1' => array(
          'border' => 'border',
          'border-top' => 'border-top',
          'border-right' => 'border-right',
          'border-bottom' => 'border-bottom',
          'border-left' => 'border-left',
          'border-width' => 'border-width',
          'border-top-width' => 'border-top-width',
          'border-right-width' => 'border-right-width',
          'border-bottom-width' => 'border-bottom-width',
          'border-left-width' => 'border-left-width',
        ),
      // Border properties (2)
      'wysiwyg_filter_styles_border-2' => array(
          'border-color' => 'border-color',
          'border-top-color' => 'border-top-color',
          'border-right-color' => 'border-right-color',
          'border-bottom-color' => 'border-bottom-color',
          'border-left-color' => 'border-left-color',
          'border-style' => 'border-style',
          'border-top-style' => 'border-top-style',
          'border-right-style' => 'border-right-style',
          'border-bottom-style' => 'border-bottom-style',
          'border-left-style' => 'border-left-style',
        ),
      // Dimension properties
      'wysiwyg_filter_styles_dimension' => array(
          'height' => 'height',
          'width' => 'width',
          'line-height' => 0,
          'max-height' => 0,
          'max-width' => 0,
          'min-height' => 0,
          'min-width' => 0,
        ),
      // Positioning properties
      'wysiwyg_filter_styles_positioning' => array(
          'bottom' => 'bottom',
          'left' => 'left',
          'right' => 'right',
          'top' => 'top',
          'z-index' => 'z-index',
          'clip' => 0,
          'overflow' => 0,
          'vertical-align' => 0,
        ),
      // Layout properties
      'wysiwyg_filter_styles_layout' => array(
          'clear' => 'clear',
          'display' => 'display',
          'float' => 'float',
          'position' => 'position',
          'visibility' => 'visibility',
        ),
      // List properties
      'wysiwyg_filter_styles_list' => array(
          'list-style' => 'list-style',
          'list-style-image' => 'list-style-image',
          'list-style-position' => 'list-style-position',
          'list-style-type' => 'list-style-type',
        ),
      // Table properties
      'wysiwyg_filter_styles_table' => array(
          'border-collapse' => 0,
          'border-spacing' => 0,
          'caption-side' => 0,
          'empty-cells' => 0,
          'table-layout' => 0,
        ),
      // User interface properties
      'wysiwyg_filter_styles_user' => array(
          'cursor' => 0,
          'outline' => 0,
          'outline-width' => 0,
          'outline-style' => 0,
          'outline-color' => 0,
          'zoom' => 0,
        ),
      // Rules for Class Names
      'wysiwyg_filter_valid_classes' => array(
          0 => 'caption',
        ),
      // Rules for Element IDs
      'wysiwyg_filter_valid_ids' => array(),
      // Rules for URLs used within inline styles
      'wysiwyg_filter_style_urls' => array(),
      // Policy
      'wysiwyg_filter_nofollow_policy' => 'disabled',
      // Domains list
      'wysiwyg_filter_nofollow_domains' => array(),
      // Valid elements parsed
      'wysiwyg_filter_valid_elements_parsed' => array(
          'a' => array(
            'href' => array(
              'required' => TRUE,
            ),
            'target' => array(
              'values' => array(
                0 => '_blank',
              ),
            ),
            'title' => array(),
          ),
          'blockquote' => array(),
          'br' => array(),
          'cite' => array(),
          'code' => array(),
          'dd' => array(),
          'div' => array(
            'align' => array(
              'values' => array(
                0 => 'center',
                1 => 'justify',
                2 => 'left',
                3 => 'right',
              ),
            ),
          ),
          'dl' => array(),
          'dt' => array(),
          'em' => array(),
          'iframe' => array(
            '*' => array(),
          ),
          'img' => array(
            '*' => array(),
          ),
          'li' => array(),
          'ol' => array(),
          'p' => array(
            'align' => array(
              'values' => array(
                0 => 'center',
                1 => 'justify',
                2 => 'left',
                3 => 'right',
              ),
            ),
          ),
          'span' => array(),
          'strong' => array(),
          'ul' => array(),
        ),
    ),
  );
  $input_format->filters = array(
    'filter' => array(
      // Delta => Weight for: URL filter
      '2' => '0',
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
  $input_format->name = 'Full HTML TinyMCE';
  $input_format->roles = array();
  $input_format->cache = TRUE;
  $input_format->settings = array(
    // Settings for: filter module
    'filter' => array(
      // Maximum link text length
      'filter_url_length' => '72',
    ),
  );
  $input_format->filters = array(
    'filter' => array(
      // Delta => Weight for: URL filter
      '2' => '0',
      // Delta => Weight for: HTML corrector
      '3' => '10',
    ),
    'image_caption_filter' => array(
      // Delta => Weight for: Image caption filter
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
      // Filter HTML tags
      'filter_html' => '1',
      // Allowed HTML tags
      'allowed_html' => '<a> <em> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd>',
      // Display HTML help
      'filter_html_help' => 1,
      // Spam link deterrent
      'filter_html_nofollow' => 1,
    ),
  );
  $input_format->filters = array(
    'filter' => array(
      // Delta => Weight for: URL filter
      '2' => '0',
      // Delta => Weight for: HTML filter
      '0' => '10',
      // Delta => Weight for: HTML corrector
      '3' => '10',
    ),
  );
  $input_format->machine = 'comments';
  $input_formats['comments'] = $input_format;

  return $input_formats;

}
