<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function photo_gallery_imagecache_default_presets() {
  $items = array(
    'Image' => array(
      'presetname' => 'Image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '425',
            'height' => '350',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'Image-Huge' => array(
      'presetname' => 'Image-Huge',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '570',
            'height' => '570',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'photo_gallery_bg' => array(
      'presetname' => 'photo_gallery_bg',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '610',
            'height' => '450',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_textactions',
          'action' => 'textactions_text2canvas',
          'data' => array(
            'size' => '30',
            'angle' => '45',
            'alpha' => '10',
            'xpos' => 'center',
            'ypos' => 'center',
            'RGB' => array(
              'HEX' => '333333',
            ),
            'fontfile' => 'liberation-fonts-1.04/LiberationSans-Regular.ttf',
            'text' => 'dbcustoms.net',
            'evaluate_text' => 0,
          ),
        ),
        '2' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_definecanvas',
          'data' => array(
            'RGB' => array(
              'HEX' => '000000',
            ),
            'under' => 1,
            'exact' => array(
              'width' => '',
              'height' => '',
              'xpos' => 'center',
              'ypos' => 'center',
            ),
            'relative' => array(
              'leftdiff' => '',
              'rightdiff' => '',
              'topdiff' => '',
              'bottomdiff' => '',
            ),
          ),
        ),
        '3' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_roundedcorners',
          'data' => array(
            'radius' => '16',
            'independent_corners_set' => array(
              'independent_corners' => 0,
              'radii' => array(
                'tl' => '',
                'tr' => '',
                'bl' => '',
                'br' => '',
              ),
            ),
          ),
        ),
      ),
    ),
    'photo_gallery_front' => array(
      'presetname' => 'photo_gallery_front',
      'actions' => array(
        '0' => array(
          'weight' => '-10',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '600',
            'height' => '',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '-9',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_definecanvas',
          'data' => array(
            'RGB' => array(
              'HEX' => '000000',
            ),
            'under' => 1,
            'exact' => array(
              'width' => '',
              'height' => '',
              'xpos' => 'center',
              'ypos' => 'center',
            ),
            'relative' => array(
              'leftdiff' => '',
              'rightdiff' => '',
              'topdiff' => '',
              'bottomdiff' => '',
            ),
          ),
        ),
        '2' => array(
          'weight' => '-8',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_roundedcorners',
          'data' => array(
            'radius' => '16',
            'independent_corners_set' => array(
              'independent_corners' => 0,
              'radii' => array(
                'tl' => '',
                'tr' => '',
                'bl' => '',
                'br' => '',
              ),
            ),
          ),
        ),
        '3' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_file2canvas',
          'data' => array(
            'xpos' => 'center',
            'ypos' => 'bottom',
            'alpha' => '90',
            'path' => 'sites/all/themes/basic/images/black_background.png',
          ),
        ),
        '4' => array(
          'weight' => '0',
          'module' => 'imagecache_textactions',
          'action' => 'textactions_text2canvas',
          'data' => array(
            'size' => '26',
            'angle' => '45',
            'alpha' => '15',
            'xpos' => 'left+100',
            'ypos' => 'bottom-100',
            'RGB' => array(
              'HEX' => '333333',
            ),
            'fontfile' => 'liberation-fonts-1.04/LiberationSans-Regular.ttf',
            'text' => 'dbcustoms.net',
            'evaluate_text' => 0,
          ),
        ),
      ),
    ),
    'photo_gallery_sm' => array(
      'presetname' => 'photo_gallery_sm',
      'actions' => array(
        '0' => array(
          'weight' => '-10',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '185',
            'height' => '168',
          ),
        ),
        '1' => array(
          'weight' => '-9',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_canvas2file',
          'data' => array(
            'xpos' => 'center',
            'ypos' => '10',
            'alpha' => '100',
            'path' => 'sites/all/themes/basic/images/poloriod.png',
            'dimensions' => 'background',
          ),
        ),
      ),
    ),
    'photo_gallery_thumb' => array(
      'presetname' => 'photo_gallery_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '-10',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '124',
            'height' => '115',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_canvas2file',
          'data' => array(
            'xpos' => 'center',
            'ypos' => '7',
            'alpha' => '100',
            'path' => 'sites/all/themes/basic/images/poloriod_sm.png',
            'dimensions' => 'background',
          ),
        ),
        '2' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '95%',
            'height' => '95%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'photo_gallery_thumb_sm' => array(
      'presetname' => 'photo_gallery_thumb_sm',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '100',
            'height' => '100',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function photo_gallery_node_info() {
  $items = array(
    'photos' => array(
      'name' => t('Photo Gallery'),
      'module' => 'features',
      'description' => t('Photo Gallery'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function photo_gallery_views_api() {
  return array(
    'api' => '2',
  );
}
