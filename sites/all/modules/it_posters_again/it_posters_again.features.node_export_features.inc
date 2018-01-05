<?php
/**
 * @file
 * it_posters_again.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function it_posters_again_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0q6lgs7u0y7tp6nnhbuo1ms4ya6hw2zd\',
            \'format\' => NULL,
            \'safe_value\' => \'0q6lgs7u0y7tp6nnhbuo1ms4ya6hw2zd\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/0q6lgs7u0y7tp6nnhbuo1ms4ya6hw2zd\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/0q6lgs7u0y7tp6nnhbuo1ms4ya6hw2zd\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/0q6lgs7u0y7tp6nnhbuo1ms4ya6hw2zd?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/0q6lgs7u0y7tp6nnhbuo1ms4ya6hw2zd?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Medical School Information Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Medical School Information Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'The Sun Never Sets on MSIS: Adventures in Teleworking\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'012fc5fe-e7fa-47c6-95c3-db7d0396cb5b\',
      \'vid\' => NULL,
      \'vuuid\' => \'8d89d2fb-b27a-459f-a335-64f23c92c5cd\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'hrtp2r5zn4h3c1jhoyfdsq5b0nwudlte\',
            \'format\' => NULL,
            \'safe_value\' => \'hrtp2r5zn4h3c1jhoyfdsq5b0nwudlte\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/hrtp2r5zn4h3c1jhoyfdsq5b0nwudlte\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/hrtp2r5zn4h3c1jhoyfdsq5b0nwudlte\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'interdisciplinary-collaboration\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/hrtp2r5zn4h3c1jhoyfdsq5b0nwudlte?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/hrtp2r5zn4h3c1jhoyfdsq5b0nwudlte?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Advance Research Computing Technology Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Advance Research Computing Technology Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'System Metrics and Logging at Scale\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'0360117d-8b8d-43e6-a065-e6d0b32b7345\',
      \'vid\' => NULL,
      \'vuuid\' => \'b6c1c8e1-ce25-45b7-b15c-506581857b44\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'yhd6vzglxk6mwvzb7gsq040ia26wupww\',
            \'format\' => NULL,
            \'safe_value\' => \'yhd6vzglxk6mwvzb7gsq040ia26wupww\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/yhd6vzglxk6mwvzb7gsq040ia26wupww\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/yhd6vzglxk6mwvzb7gsq040ia26wupww\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/yhd6vzglxk6mwvzb7gsq040ia26wupww?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/yhd6vzglxk6mwvzb7gsq040ia26wupww?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Medical School Information Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Medical School Information Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Developing the Learner Portfolio Framework: an iterative process\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'03b9dcf8-1567-4256-ae1f-44a4a2156dba\',
      \'vid\' => NULL,
      \'vuuid\' => \'fc673308-cc29-4a00-b43a-caff256cf6ca\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'8a3gq365920u3776tbq4wyeu9u2j182p\',
            \'format\' => NULL,
            \'safe_value\' => \'8a3gq365920u3776tbq4wyeu9u2j182p\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/8a3gq365920u3776tbq4wyeu9u2j182p\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/8a3gq365920u3776tbq4wyeu9u2j182p\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"400\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/8a3gq365920u3776tbq4wyeu9u2j182p?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"400\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/8a3gq365920u3776tbq4wyeu9u2j182p?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'School of Education\',
            \'format\' => NULL,
            \'safe_value\' => \'School of Education\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'TeachLivE: Innovation in Teaching Practice\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'03d1f3b8-bbf1-4236-b7ab-1c869554dba7\',
      \'vid\' => NULL,
      \'vuuid\' => \'0aaee428-f343-4737-bbb4-b563356724c1\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'gduro1kbuvazdtyh28c91yvd4s554c85\',
            \'format\' => NULL,
            \'safe_value\' => \'gduro1kbuvazdtyh28c91yvd4s554c85\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/gduro1kbuvazdtyh28c91yvd4s554c85\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/gduro1kbuvazdtyh28c91yvd4s554c85\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'community-of-practice\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/gduro1kbuvazdtyh28c91yvd4s554c85?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/gduro1kbuvazdtyh28c91yvd4s554c85?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'User-Centered Design Community of Practice\',
            \'format\' => NULL,
            \'safe_value\' => \'User-Centered Design Community of Practice\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'What can User Experience do for You?\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'05584374-4c33-4e89-b9be-c6e2e2b6ccda\',
      \'vid\' => NULL,
      \'vuuid\' => \'24a86f2f-07eb-4df9-bbe5-0a298bb080fb\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'uja8t93q43joc4m0xmvoe0kti74jg35w\',
            \'format\' => NULL,
            \'safe_value\' => \'uja8t93q43joc4m0xmvoe0kti74jg35w\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/uja8t93q43joc4m0xmvoe0kti74jg35w\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/uja8t93q43joc4m0xmvoe0kti74jg35w\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'community-of-practice\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/uja8t93q43joc4m0xmvoe0kti74jg35w?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/uja8t93q43joc4m0xmvoe0kti74jg35w?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Agile Development Community of Practice\',
            \'format\' => NULL,
            \'safe_value\' => \'Agile Development Community of Practice\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Agile Development Community of Practice\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'0a5a6d25-afe6-432a-9cb5-ede222ccb697\',
      \'vid\' => NULL,
      \'vuuid\' => \'c9c9e0fc-5c2b-43d5-b7cf-c992a8dea963\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'wy4k85e64ygaogov2zzgvhflbjstd5cg\',
            \'format\' => NULL,
            \'safe_value\' => \'wy4k85e64ygaogov2zzgvhflbjstd5cg\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/wy4k85e64ygaogov2zzgvhflbjstd5cg\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/wy4k85e64ygaogov2zzgvhflbjstd5cg\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/wy4k85e64ygaogov2zzgvhflbjstd5cg?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/wy4k85e64ygaogov2zzgvhflbjstd5cg?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Student Life\',
            \'format\' => NULL,
            \'safe_value\' => \'Student Life\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Sessions @ Michigan\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'0bac1e2e-5a09-439e-8dcd-d595cf9eb89a\',
      \'vid\' => NULL,
      \'vuuid\' => \'f93246b9-40c7-4f9f-bcca-2ef6fe01ec77\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'dnhvnh0ocyxnczrxcrf4mgxwvvvr0om3\',
            \'format\' => NULL,
            \'safe_value\' => \'dnhvnh0ocyxnczrxcrf4mgxwvvvr0om3\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/dnhvnh0ocyxnczrxcrf4mgxwvvvr0om3\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/dnhvnh0ocyxnczrxcrf4mgxwvvvr0om3\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/dnhvnh0ocyxnczrxcrf4mgxwvvvr0om3?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/dnhvnh0ocyxnczrxcrf4mgxwvvvr0om3?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Information & Technology Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Information &amp; Technology Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'MiStorage: Beyond Mainstream and Value\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'14369b4e-48f1-403a-a92c-f3a07817bc82\',
      \'vid\' => NULL,
      \'vuuid\' => \'7b10d517-d44e-428e-aa67-882df80478b1\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'3apt7znhuhq1zptuog339qtzdnek78b3\',
            \'format\' => NULL,
            \'safe_value\' => \'3apt7znhuhq1zptuog339qtzdnek78b3\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/3apt7znhuhq1zptuog339qtzdnek78b3\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/3apt7znhuhq1zptuog339qtzdnek78b3\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'internet-of-things\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/3apt7znhuhq1zptuog339qtzdnek78b3?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/3apt7znhuhq1zptuog339qtzdnek78b3?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'School of Dentistry\',
            \'format\' => NULL,
            \'safe_value\' => \'School of Dentistry\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Cloud Vendor Security Assessment for ePHI\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'14d72403-ba34-4a5a-aa94-82af1b601787\',
      \'vid\' => NULL,
      \'vuuid\' => \'adeed9c0-a45e-4133-be63-8b6aa797fd80\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0uhwpauoigb9yahk669wmollmcq3bcut\',
            \'format\' => NULL,
            \'safe_value\' => \'0uhwpauoigb9yahk669wmollmcq3bcut\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/0uhwpauoigb9yahk669wmollmcq3bcut\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/0uhwpauoigb9yahk669wmollmcq3bcut\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'soft-skills\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/0uhwpauoigb9yahk669wmollmcq3bcut?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/0uhwpauoigb9yahk669wmollmcq3bcut?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'The Role of IT Service Management in Michigan IT\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'1b381b14-d214-4c40-9848-c9064d264002\',
      \'vid\' => NULL,
      \'vuuid\' => \'133e9b4a-5b14-4564-b541-c914f3713a6e\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'dhvdxolrrndhq54bq26e81h3iivjdpat\',
            \'format\' => NULL,
            \'safe_value\' => \'dhvdxolrrndhq54bq26e81h3iivjdpat\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/dhvdxolrrndhq54bq26e81h3iivjdpat\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/dhvdxolrrndhq54bq26e81h3iivjdpat\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/dhvdxolrrndhq54bq26e81h3iivjdpat?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/dhvdxolrrndhq54bq26e81h3iivjdpat?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Medical School Information Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Medical School Information Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => "Let\'s Commit! Tying the Knot with Service Level Committments",
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'1b9ed559-c4d2-480f-83cc-414fe35b7736\',
      \'vid\' => NULL,
      \'vuuid\' => \'4cd70f5b-fba9-4383-a169-09cec335741a\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'mxhvvbyvfh2py3qbmsbjv9ui9deyjdag\',
            \'format\' => NULL,
            \'safe_value\' => \'mxhvvbyvfh2py3qbmsbjv9ui9deyjdag\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/mxhvvbyvfh2py3qbmsbjv9ui9deyjdag\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/mxhvvbyvfh2py3qbmsbjv9ui9deyjdag\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/mxhvvbyvfh2py3qbmsbjv9ui9deyjdag?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/mxhvvbyvfh2py3qbmsbjv9ui9deyjdag?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'CAEN\',
            \'format\' => NULL,
            \'safe_value\' => \'CAEN\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Software On-Demand with Application Jukebox\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'1e55c912-5259-4b73-8d42-8ae46938e60e\',
      \'vid\' => NULL,
      \'vuuid\' => \'494be491-ce3b-4201-a529-076a22b2e925\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'5hzug955bfxq9ucrkeacfzv4sql5anjr\',
            \'format\' => NULL,
            \'safe_value\' => \'5hzug955bfxq9ucrkeacfzv4sql5anjr\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/5hzug955bfxq9ucrkeacfzv4sql5anjr\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/5hzug955bfxq9ucrkeacfzv4sql5anjr\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'soft-skills\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/5hzug955bfxq9ucrkeacfzv4sql5anjr?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/5hzug955bfxq9ucrkeacfzv4sql5anjr?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Hacks with Friends Demystified\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'28a10e15-6e50-4641-880b-d8eb4643efcf\',
      \'vid\' => NULL,
      \'vuuid\' => \'d46c3bdd-fd7e-4fe9-9e02-ff2d15bed07a\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'shlvhodhkib7g9q6jot19zabjaksitu2\',
            \'format\' => NULL,
            \'safe_value\' => \'shlvhodhkib7g9q6jot19zabjaksitu2\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/shlvhodhkib7g9q6jot19zabjaksitu2\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/shlvhodhkib7g9q6jot19zabjaksitu2\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<iframe  src="https://app.box.com/embed/preview/shlvhodhkib7g9q6jot19zabjaksitu2?view=&sort=&direction=ASC&theme=light" width="330" height="300" frameborder="0" allowfullscreen webkitallowfullscreen msallowfullscreen></iframe>\',
            \'format\' => \'full_html\',
            \'safe_value\' => \'<iframe  src="https://app.box.com/embed/preview/shlvhodhkib7g9q6jot19zabjaksitu2?view=&sort=&direction=ASC&theme=light" width="330" height="300" frameborder="0" allowfullscreen webkitallowfullscreen msallowfullscreen></iframe>\',
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'CAEN\',
            \'format\' => NULL,
            \'safe_value\' => \'CAEN\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Reserving Spaces Online and On-site: Improving CAEN Collaborative Spaces\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'29d386f8-7637-4d55-98ef-878144cfec49\',
      \'vid\' => NULL,
      \'vuuid\' => \'7ed1db24-f5c4-41e0-a9ba-1a82416a261d\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'kwflz6b28z1kn472mh3ca16g46bt6tsn\',
            \'format\' => NULL,
            \'safe_value\' => \'kwflz6b28z1kn472mh3ca16g46bt6tsn\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/kwflz6b28z1kn472mh3ca16g46bt6tsn\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/kwflz6b28z1kn472mh3ca16g46bt6tsn\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/kwflz6b28z1kn472mh3ca16g46bt6tsn?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/kwflz6b28z1kn472mh3ca16g46bt6tsn?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Michigan Ross\',
            \'format\' => NULL,
            \'safe_value\' => \'Michigan Ross\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Tracking Attendance: When Seating Charts are Not Enough\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'2a8c9005-e089-4387-b881-95aebc629081\',
      \'vid\' => NULL,
      \'vuuid\' => \'0991a274-43aa-426a-91d5-3d0ff900c916\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'sjwdzxko9lfcpweevj5acqlc95lxxsf5\',
            \'format\' => NULL,
            \'safe_value\' => \'sjwdzxko9lfcpweevj5acqlc95lxxsf5\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/sjwdzxko9lfcpweevj5acqlc95lxxsf5\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/sjwdzxko9lfcpweevj5acqlc95lxxsf5\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/sjwdzxko9lfcpweevj5acqlc95lxxsf5?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/sjwdzxko9lfcpweevj5acqlc95lxxsf5?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'LSA Psychology\',
            \'format\' => NULL,
            \'safe_value\' => \'LSA Psychology\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'LSA Psychology Google Room Reservation System \',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'2bea423f-2c60-4aa3-ab1c-ab8870173662\',
      \'vid\' => NULL,
      \'vuuid\' => \'db78cd0e-e6c8-4cce-9a6e-aba7dd782c43\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'gwcxsdlviiyrz8gdh423wy6okilwvupn\',
            \'format\' => NULL,
            \'safe_value\' => \'gwcxsdlviiyrz8gdh423wy6okilwvupn\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/gwcxsdlviiyrz8gdh423wy6okilwvupn\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/gwcxsdlviiyrz8gdh423wy6okilwvupn\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/gwcxsdlviiyrz8gdh423wy6okilwvupn?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/gwcxsdlviiyrz8gdh423wy6okilwvupn?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Medical School Information Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Medical School Information Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'FastApp: A Service to Support Mobile Technology for Educational Content\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'2c42e4f0-73e2-4407-8d5b-5a1542a72732\',
      \'vid\' => NULL,
      \'vuuid\' => \'a86d471e-5031-4133-a3f5-6e04ea077f0e\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'se4ydmjsd0uris92454yvhwau4itzv3j\',
            \'format\' => NULL,
            \'safe_value\' => \'se4ydmjsd0uris92454yvhwau4itzv3j\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/se4ydmjsd0uris92454yvhwau4itzv3j\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/se4ydmjsd0uris92454yvhwau4itzv3j\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'interdisciplinary-collaboration\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/se4ydmjsd0uris92454yvhwau4itzv3j?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/se4ydmjsd0uris92454yvhwau4itzv3j?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'University of Michigan Health System\',
            \'format\' => NULL,
            \'safe_value\' => \'University of Michigan Health System\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'UMHS SharePoint Service\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'318d63b3-cd1e-4098-aa97-b561a37a454b\',
      \'vid\' => NULL,
      \'vuuid\' => \'84de02d2-fd4b-41b1-894a-15b0cdceba13\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'qetmh2mndm8d6ignbbk1jx4o9vvsjioz\',
            \'format\' => NULL,
            \'safe_value\' => \'qetmh2mndm8d6ignbbk1jx4o9vvsjioz\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/qetmh2mndm8d6ignbbk1jx4o9vvsjioz\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/qetmh2mndm8d6ignbbk1jx4o9vvsjioz\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/qetmh2mndm8d6ignbbk1jx4o9vvsjioz?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/qetmh2mndm8d6ignbbk1jx4o9vvsjioz?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Digital Education & Innovation\',
            \'format\' => NULL,
            \'safe_value\' => \'Digital Education &amp; Innovation\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Digital Innovation Greenhouse\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'39a86a6b-7dfa-44c2-8171-76a0fb1a9935\',
      \'vid\' => NULL,
      \'vuuid\' => \'f7a04f6a-92f3-467d-bb5a-e33811afaad4\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'ta48lhu4i72oo4k9uvxum1v7zi24gb76\',
            \'format\' => NULL,
            \'safe_value\' => \'ta48lhu4i72oo4k9uvxum1v7zi24gb76\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/ta48lhu4i72oo4k9uvxum1v7zi24gb76\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/ta48lhu4i72oo4k9uvxum1v7zi24gb76\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/ta48lhu4i72oo4k9uvxum1v7zi24gb76?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/ta48lhu4i72oo4k9uvxum1v7zi24gb76?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'LSA Shared Services\',
            \'format\' => NULL,
            \'safe_value\' => \'LSA Shared Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Deliver Information and Value: BusinessObjects Publications\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'3a76b04c-0810-41c5-9f87-bab2bbc4829c\',
      \'vid\' => NULL,
      \'vuuid\' => \'db746c57-03d2-4477-89ae-bcf44959176d\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'cx6ocmjpkl4a25a1r31cv5smnqnoag0v\',
            \'format\' => NULL,
            \'safe_value\' => \'cx6ocmjpkl4a25a1r31cv5smnqnoag0v\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/cx6ocmjpkl4a25a1r31cv5smnqnoag0v\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/cx6ocmjpkl4a25a1r31cv5smnqnoag0v\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'engaged-learning\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/cx6ocmjpkl4a25a1r31cv5smnqnoag0v?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/cx6ocmjpkl4a25a1r31cv5smnqnoag0v?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Medical School\',
            \'format\' => NULL,
            \'safe_value\' => \'Medical School\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'SecondLook: Self-Review Mobile Applications for the Modern Learner\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'3bd0db18-20d8-4186-8dcc-20967808aef9\',
      \'vid\' => NULL,
      \'vuuid\' => \'abc3cb8f-925e-48da-9196-f868d094d0bb\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'uth428p0qsdsryg4n0lc30ejmkwr9gzg\',
            \'format\' => NULL,
            \'safe_value\' => \'uth428p0qsdsryg4n0lc30ejmkwr9gzg\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/uth428p0qsdsryg4n0lc30ejmkwr9gzg\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/uth428p0qsdsryg4n0lc30ejmkwr9gzg\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/uth428p0qsdsryg4n0lc30ejmkwr9gzg?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/uth428p0qsdsryg4n0lc30ejmkwr9gzg?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Medical School Information Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Medical School Information Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Video Podcast and Production Services for Educators\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'3d21fdd7-bf36-4076-acbf-819f754c5102\',
      \'vid\' => NULL,
      \'vuuid\' => \'05a0932b-11f0-4eac-8109-321b94b72821\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'t7zeai5iba3r6om2kf47kfhs0q5ua0x1\',
            \'format\' => NULL,
            \'safe_value\' => \'t7zeai5iba3r6om2kf47kfhs0q5ua0x1\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/t7zeai5iba3r6om2kf47kfhs0q5ua0x1\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/t7zeai5iba3r6om2kf47kfhs0q5ua0x1\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'soft-skills\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/t7zeai5iba3r6om2kf47kfhs0q5ua0x1?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/t7zeai5iba3r6om2kf47kfhs0q5ua0x1?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Medical School\',
            \'format\' => NULL,
            \'safe_value\' => \'Medical School\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Data Governance\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'3df060b6-1d2e-4def-9962-2b29fb0bb0a3\',
      \'vid\' => NULL,
      \'vuuid\' => \'0ed71c55-7776-47b0-b848-6fe314289126\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0vh65l6tgyu5hud408pqnglhheoxz3wu\',
            \'format\' => NULL,
            \'safe_value\' => \'0vh65l6tgyu5hud408pqnglhheoxz3wu\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/0vh65l6tgyu5hud408pqnglhheoxz3wu\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/0vh65l6tgyu5hud408pqnglhheoxz3wu\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'interdisciplinary-collaboration\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/0vh65l6tgyu5hud408pqnglhheoxz3wu?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/0vh65l6tgyu5hud408pqnglhheoxz3wu?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'University of Michigan Health System\',
            \'format\' => NULL,
            \'safe_value\' => \'University of Michigan Health System\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Information Management Glossary\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'4574da84-2a5d-4ccd-ac65-ddf7f0deae3f\',
      \'vid\' => NULL,
      \'vuuid\' => \'f59e7982-d9de-401f-9c5f-ba72286a899c\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'m8989uefppc96ojv6k11wpjlfj37e68o\',
            \'format\' => NULL,
            \'safe_value\' => \'m8989uefppc96ojv6k11wpjlfj37e68o\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/m8989uefppc96ojv6k11wpjlfj37e68o\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/m8989uefppc96ojv6k11wpjlfj37e68o\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/m8989uefppc96ojv6k11wpjlfj37e68o?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/m8989uefppc96ojv6k11wpjlfj37e68o?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Information & Technology Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Information &amp; Technology Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Digital Signage\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'46d5e57e-ebc2-4160-a394-f7b4dd919520\',
      \'vid\' => NULL,
      \'vuuid\' => \'831d752f-97c4-41ad-86e4-33572458c3ae\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'wh2suj3t7kv05z1c6fg9j74ow3nyr03v\',
            \'format\' => NULL,
            \'safe_value\' => \'wh2suj3t7kv05z1c6fg9j74ow3nyr03v\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/wh2suj3t7kv05z1c6fg9j74ow3nyr03v\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/wh2suj3t7kv05z1c6fg9j74ow3nyr03v\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/wh2suj3t7kv05z1c6fg9j74ow3nyr03v?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/wh2suj3t7kv05z1c6fg9j74ow3nyr03v?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Information & Technology Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Information &amp; Technology Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Electronic Faxes to Imaging\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'47100bb3-125b-44ce-97ee-b5fa0a43ced4\',
      \'vid\' => NULL,
      \'vuuid\' => \'747dacb9-a5cb-408c-a134-7e0c919a7279\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1ye4z702hywq4c27xeppkmx82c8xfwmn\',
            \'format\' => NULL,
            \'safe_value\' => \'1ye4z702hywq4c27xeppkmx82c8xfwmn\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/1ye4z702hywq4c27xeppkmx82c8xfwmn\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/1ye4z702hywq4c27xeppkmx82c8xfwmn\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/1ye4z702hywq4c27xeppkmx82c8xfwmn?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/1ye4z702hywq4c27xeppkmx82c8xfwmn?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Dr. Clifford Craig, Dr. Joseph Maratt, Dr. James Goulet, Dr. Larry Gruppen, Dr. John Zeller, M. Grace Trinidad, Yue Liu, Bob Riddle\',
            \'format\' => NULL,
            \'safe_value\' => \'Dr. Clifford Craig, Dr. Joseph Maratt, Dr. James Goulet, Dr. Larry Gruppen, Dr. John Zeller, M. Grace Trinidad, Yue Liu, Bob Riddle\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Hands Free: Google Glass in the Gross Anatomy Labs\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'559482c0-671b-4c6e-b6ef-174e0cbcec26\',
      \'vid\' => NULL,
      \'vuuid\' => \'07fe2535-3963-47db-84eb-4cb0cf742aaf\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'6u1lza626r1mxg7sx6o6ugy0wc14v6vl\',
            \'format\' => NULL,
            \'safe_value\' => \'6u1lza626r1mxg7sx6o6ugy0wc14v6vl\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/6u1lza626r1mxg7sx6o6ugy0wc14v6vl\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/6u1lza626r1mxg7sx6o6ugy0wc14v6vl\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"400\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/6u1lza626r1mxg7sx6o6ugy0wc14v6vl?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"400\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/6u1lza626r1mxg7sx6o6ugy0wc14v6vl?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'research\',
          ),
        ),
      ),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Research Capability Framework\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'56f222c5-89c9-4b91-a591-c41467411d48\',
      \'vid\' => NULL,
      \'vuuid\' => \'40559071-ce59-42e8-a7d0-30e626b66839\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'u3bm1ktbewchot4tl2mfg3t4ne7fo3o1\',
            \'format\' => NULL,
            \'safe_value\' => \'u3bm1ktbewchot4tl2mfg3t4ne7fo3o1\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/u3bm1ktbewchot4tl2mfg3t4ne7fo3o1\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/u3bm1ktbewchot4tl2mfg3t4ne7fo3o1\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/u3bm1ktbewchot4tl2mfg3t4ne7fo3o1?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/u3bm1ktbewchot4tl2mfg3t4ne7fo3o1?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Information & Technology Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Information &amp; Technology Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'ITS Tech Repair\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'58e870d8-92b4-4341-9dde-4080e766194c\',
      \'vid\' => NULL,
      \'vuuid\' => \'d6eec69d-5315-4564-9ffb-da94a90f9f9a\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'n7kwhd9y5kl4jww7dve5290y0bqd561y\',
            \'format\' => NULL,
            \'safe_value\' => \'n7kwhd9y5kl4jww7dve5290y0bqd561y\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/n7kwhd9y5kl4jww7dve5290y0bqd561y\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/n7kwhd9y5kl4jww7dve5290y0bqd561y\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'community-of-practice\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/n7kwhd9y5kl4jww7dve5290y0bqd561y?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/n7kwhd9y5kl4jww7dve5290y0bqd561y?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Data Management Community of Practice\',
            \'format\' => NULL,
            \'safe_value\' => \'Data Management Community of Practice\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Data Management Community of Practice\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'58f59881-af89-42f8-87cf-b0e033a7d746\',
      \'vid\' => NULL,
      \'vuuid\' => \'cb50138c-114c-4fee-8835-1eea2daa9cea\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'noixy6nx49ul3bdyghb746lboo8dobn5\',
            \'format\' => NULL,
            \'safe_value\' => \'noixy6nx49ul3bdyghb746lboo8dobn5\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/noixy6nx49ul3bdyghb746lboo8dobn5\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/noixy6nx49ul3bdyghb746lboo8dobn5\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/noixy6nx49ul3bdyghb746lboo8dobn5?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/noixy6nx49ul3bdyghb746lboo8dobn5?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'patient\',
          ),
        ),
      ),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'University of Michigan Health System\',
            \'format\' => NULL,
            \'safe_value\' => \'University of Michigan Health System\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Patient Data in MiChart\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'5ba7a827-a97f-41b3-862a-efa93bf828f5\',
      \'vid\' => NULL,
      \'vuuid\' => \'20232176-77c8-428b-bcd7-fa6ddd8e85a5\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'efmcznpmlmvyrqynpulrzbe8kdwv49eu\',
            \'format\' => NULL,
            \'safe_value\' => \'efmcznpmlmvyrqynpulrzbe8kdwv49eu\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/efmcznpmlmvyrqynpulrzbe8kdwv49eu\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/efmcznpmlmvyrqynpulrzbe8kdwv49eu\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'soft-skills\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/efmcznpmlmvyrqynpulrzbe8kdwv49eu?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/efmcznpmlmvyrqynpulrzbe8kdwv49eu?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Medical School Information Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Medical School Information Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Help Me Now: Reflections on One Year of Service\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'625f39e9-2512-4f37-8cdd-4b87735ec7b1\',
      \'vid\' => NULL,
      \'vuuid\' => \'1df0ef2c-9e1b-40af-8822-41b0a182fd30\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'sz3ilz17zoqsqsy3b8ueei22u56vxwj5\',
            \'format\' => NULL,
            \'safe_value\' => \'sz3ilz17zoqsqsy3b8ueei22u56vxwj5\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/sz3ilz17zoqsqsy3b8ueei22u56vxwj5\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/sz3ilz17zoqsqsy3b8ueei22u56vxwj5\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/sz3ilz17zoqsqsy3b8ueei22u56vxwj5?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/sz3ilz17zoqsqsy3b8ueei22u56vxwj5?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Information and Infrastructure Assurance\',
            \'format\' => NULL,
            \'safe_value\' => \'Information and Infrastructure Assurance\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'IT Security: Alerts, Advisories & Notices\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'63eea5f0-48c5-48f3-bff6-62a38882e093\',
      \'vid\' => NULL,
      \'vuuid\' => \'00a57519-be99-4685-8ec5-757b8d7ecf47\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'i8h0brpnj495gmnyagjivum3fx9034r4\',
            \'format\' => NULL,
            \'safe_value\' => \'i8h0brpnj495gmnyagjivum3fx9034r4\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/i8h0brpnj495gmnyagjivum3fx9034r4\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/i8h0brpnj495gmnyagjivum3fx9034r4\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/i8h0brpnj495gmnyagjivum3fx9034r4?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/i8h0brpnj495gmnyagjivum3fx9034r4?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Life Sciences Institute\',
            \'format\' => NULL,
            \'safe_value\' => \'Life Sciences Institute\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Automatic Drift Alignment for Cryo-electron Microscopy\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'6741c4eb-9578-472d-83b1-576829317615\',
      \'vid\' => NULL,
      \'vuuid\' => \'958ca495-5a53-4bf0-b96b-e5a6b1a1df3a\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'khgurwdil8n8jws5mkjhn9ji3q2riujl\',
            \'format\' => NULL,
            \'safe_value\' => \'khgurwdil8n8jws5mkjhn9ji3q2riujl\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/khgurwdil8n8jws5mkjhn9ji3q2riujl\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/khgurwdil8n8jws5mkjhn9ji3q2riujl\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/khgurwdil8n8jws5mkjhn9ji3q2riujl?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/khgurwdil8n8jws5mkjhn9ji3q2riujl?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Student Life\',
            \'format\' => NULL,
            \'safe_value\' => \'Student Life\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'AwesomeTools 2.0\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'6a1faf15-3ec9-4d96-b582-533c71d557fa\',
      \'vid\' => NULL,
      \'vuuid\' => \'749a7b5f-e891-4613-a92d-2dc05a2b8d80\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'4os82o48kgpd2s32zazrpfwn5g6e012p\',
            \'format\' => NULL,
            \'safe_value\' => \'4os82o48kgpd2s32zazrpfwn5g6e012p\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/4os82o48kgpd2s32zazrpfwn5g6e012p\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/4os82o48kgpd2s32zazrpfwn5g6e012p\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/4os82o48kgpd2s32zazrpfwn5g6e012p?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/4os82o48kgpd2s32zazrpfwn5g6e012p?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Bentley Historical Library\',
            \'format\' => NULL,
            \'safe_value\' => \'Bentley Historical Library\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Bridging Technologies to Efficiently Arrange and Describe Digital Archives\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'6c4315e7-ee42-42e3-9673-45b75531f5b3\',
      \'vid\' => NULL,
      \'vuuid\' => \'e7d8f82c-44b7-4d50-96f4-f55e8a672460\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2f93zmswxtrb022n8emnm6iyypcqplbq\',
            \'format\' => NULL,
            \'safe_value\' => \'2f93zmswxtrb022n8emnm6iyypcqplbq\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/2f93zmswxtrb022n8emnm6iyypcqplbq\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/2f93zmswxtrb022n8emnm6iyypcqplbq\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'engaged-learning\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/2f93zmswxtrb022n8emnm6iyypcqplbq?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/2f93zmswxtrb022n8emnm6iyypcqplbq?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Dash - Academic Dashboard for Students\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'6c8d6430-bc76-4d8a-84d2-5185c67f5462\',
      \'vid\' => NULL,
      \'vuuid\' => \'1384e044-f180-410f-91dc-2ff364716082\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'qnuaqs2l2w9vqgtga07knr9h0y1oborr\',
            \'format\' => NULL,
            \'safe_value\' => \'qnuaqs2l2w9vqgtga07knr9h0y1oborr\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/qnuaqs2l2w9vqgtga07knr9h0y1oborr\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/qnuaqs2l2w9vqgtga07knr9h0y1oborr\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/qnuaqs2l2w9vqgtga07knr9h0y1oborr?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/qnuaqs2l2w9vqgtga07knr9h0y1oborr?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Medical School Information Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Medical School Information Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Michigan Journal of Medicine: A Practical Pilot for the New Medical School Curriculum\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'7044833c-4174-48fb-bb68-6488cec50c49\',
      \'vid\' => NULL,
      \'vuuid\' => \'624d94d8-e43d-46dd-bbae-ebe13e7bf108\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'opgiy5306ha8yf3vnr2pvvkq9qhn1oui\',
            \'format\' => NULL,
            \'safe_value\' => \'opgiy5306ha8yf3vnr2pvvkq9qhn1oui\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/opgiy5306ha8yf3vnr2pvvkq9qhn1oui\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/opgiy5306ha8yf3vnr2pvvkq9qhn1oui\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/opgiy5306ha8yf3vnr2pvvkq9qhn1oui?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/opgiy5306ha8yf3vnr2pvvkq9qhn1oui?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'alumni\',
          ),
        ),
      ),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Office of University Development\',
            \'format\' => NULL,
            \'safe_value\' => \'Office of University Development\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Office of University Development Service Enhancement Initiative\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'7105d02b-02ff-4f49-b0b5-cd00d33e3b46\',
      \'vid\' => NULL,
      \'vuuid\' => \'08c990ac-8f4e-4aad-bac8-8658482e99de\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'6lxx7mzhcx1y67pmdi93jx3iruaneu0j\',
            \'format\' => NULL,
            \'safe_value\' => \'6lxx7mzhcx1y67pmdi93jx3iruaneu0j\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/6lxx7mzhcx1y67pmdi93jx3iruaneu0j\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/6lxx7mzhcx1y67pmdi93jx3iruaneu0j\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/6lxx7mzhcx1y67pmdi93jx3iruaneu0j?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/6lxx7mzhcx1y67pmdi93jx3iruaneu0j?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Survey Research Operations - Institute for Social Research\',
            \'format\' => NULL,
            \'safe_value\' => \'Survey Research Operations - Institute for Social Research\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Transforming Large Administrative Data Extracts into Meaningful Information\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'73910315-3018-4a73-b6b3-bff902b81355\',
      \'vid\' => NULL,
      \'vuuid\' => \'5a915ab2-e0a5-4b82-8fdf-21901ba716cd\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'htu48o3emcp1ej6a7joz1t4tphiut6wn\',
            \'format\' => NULL,
            \'safe_value\' => \'htu48o3emcp1ej6a7joz1t4tphiut6wn\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/htu48o3emcp1ej6a7joz1t4tphiut6wn\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/htu48o3emcp1ej6a7joz1t4tphiut6wn\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/htu48o3emcp1ej6a7joz1t4tphiut6wn?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/htu48o3emcp1ej6a7joz1t4tphiut6wn?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Student Life\',
            \'format\' => NULL,
            \'safe_value\' => \'Student Life\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Knowledge Sharing & Collaboration: The Evolution of the Organizational Knowledge Base\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'76229362-0eea-40cd-8b2a-54126ad26c12\',
      \'vid\' => NULL,
      \'vuuid\' => \'ef643de5-e676-49ca-89d3-632a1395bc7b\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'j5i6tkw94vpgnv7msip2e69j2vl38g5g\',
            \'format\' => NULL,
            \'safe_value\' => \'j5i6tkw94vpgnv7msip2e69j2vl38g5g\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/j5i6tkw94vpgnv7msip2e69j2vl38g5g\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/j5i6tkw94vpgnv7msip2e69j2vl38g5g\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'interdisciplinary-collaboration\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/j5i6tkw94vpgnv7msip2e69j2vl38g5g?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/j5i6tkw94vpgnv7msip2e69j2vl38g5g?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Targeted Communication Request Process\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'780c88fa-c9ad-4379-9246-95a39add10a3\',
      \'vid\' => NULL,
      \'vuuid\' => \'0120e37e-c6cf-4e72-ad2d-30711de5392d\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'do8sb6pls4kdrr0oqt1vo1eyxev32t0h\',
            \'format\' => NULL,
            \'safe_value\' => \'do8sb6pls4kdrr0oqt1vo1eyxev32t0h\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/do8sb6pls4kdrr0oqt1vo1eyxev32t0h\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/do8sb6pls4kdrr0oqt1vo1eyxev32t0h\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/do8sb6pls4kdrr0oqt1vo1eyxev32t0h?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/do8sb6pls4kdrr0oqt1vo1eyxev32t0h?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Data Communications and System Interface Across Different Systems and Platforms\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'787e8d2f-f2d5-4715-a5a1-a069547f8cd8\',
      \'vid\' => NULL,
      \'vuuid\' => \'b642118a-a707-4a24-9f2d-f6e00daad15a\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'go3nto7xcwqh2gmcmmql2zs7dfzh6kjm\',
            \'format\' => NULL,
            \'safe_value\' => \'go3nto7xcwqh2gmcmmql2zs7dfzh6kjm\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/go3nto7xcwqh2gmcmmql2zs7dfzh6kjm\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/go3nto7xcwqh2gmcmmql2zs7dfzh6kjm\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/go3nto7xcwqh2gmcmmql2zs7dfzh6kjm?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/go3nto7xcwqh2gmcmmql2zs7dfzh6kjm?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Information & Technology Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Information &amp; Technology Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'ITS EPPMO Project Health Status Reporting\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'7ba9bed4-ef43-4b58-9309-4978742a2451\',
      \'vid\' => NULL,
      \'vuuid\' => \'df7553b3-7181-4d45-89b6-6f4475cfb980\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'5oho3l1nljzhq6osj7ch6sb6mjgwtywn\',
            \'format\' => NULL,
            \'safe_value\' => \'5oho3l1nljzhq6osj7ch6sb6mjgwtywn\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/5oho3l1nljzhq6osj7ch6sb6mjgwtywn\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/5oho3l1nljzhq6osj7ch6sb6mjgwtywn\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/5oho3l1nljzhq6osj7ch6sb6mjgwtywn?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/5oho3l1nljzhq6osj7ch6sb6mjgwtywn?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Institute for Social Research Survey Research Center\',
            \'format\' => NULL,
            \'safe_value\' => \'Institute for Social Research Survey Research Center\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Exploring Modules in Python for Complex Data Solutions\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'7bbdc449-b24b-4c03-aec6-b58d99b77c67\',
      \'vid\' => NULL,
      \'vuuid\' => \'40018c38-2d69-4b1d-93c3-465d346a8ef6\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'uwjlnru4jaue51pwh3b1wwmel54bn6je\',
            \'format\' => NULL,
            \'safe_value\' => \'uwjlnru4jaue51pwh3b1wwmel54bn6je\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/uwjlnru4jaue51pwh3b1wwmel54bn6je\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/uwjlnru4jaue51pwh3b1wwmel54bn6je\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'community-of-practice\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/uwjlnru4jaue51pwh3b1wwmel54bn6je?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/uwjlnru4jaue51pwh3b1wwmel54bn6je?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Data Integration Community of Practice\',
            \'format\' => NULL,
            \'safe_value\' => \'Data Integration Community of Practice\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Data Integration Community of Practice\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'7c78db63-8cf8-40b8-9603-b89e9735a1d4\',
      \'vid\' => NULL,
      \'vuuid\' => \'a5984dea-8336-441a-b418-eac37314a9b6\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'8ttatj8m2ghk9inirwhpyx7gw34kk1om\',
            \'format\' => NULL,
            \'safe_value\' => \'8ttatj8m2ghk9inirwhpyx7gw34kk1om\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/8ttatj8m2ghk9inirwhpyx7gw34kk1om\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/8ttatj8m2ghk9inirwhpyx7gw34kk1om\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/8ttatj8m2ghk9inirwhpyx7gw34kk1om?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/8ttatj8m2ghk9inirwhpyx7gw34kk1om?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'UMHS Compass\',
            \'format\' => NULL,
            \'safe_value\' => \'UMHS Compass\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'UMHS COMPASS (COMPrehensive Analytics Services and Support)\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'8463bc51-fa23-46be-8b93-3d918b4caea7\',
      \'vid\' => NULL,
      \'vuuid\' => \'1c724ef9-a3e5-406c-876d-cf3b242434d6\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'uhzni1yb8lxmgoue28nsvulgk4z9a23d\',
            \'format\' => NULL,
            \'safe_value\' => \'uhzni1yb8lxmgoue28nsvulgk4z9a23d\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/uhzni1yb8lxmgoue28nsvulgk4z9a23d\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/uhzni1yb8lxmgoue28nsvulgk4z9a23d\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/uhzni1yb8lxmgoue28nsvulgk4z9a23d?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/uhzni1yb8lxmgoue28nsvulgk4z9a23d?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'The Technology Framework Behind Giving Blueday\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'8c6ec9a7-1ddc-4e41-b42a-c9f80da091a2\',
      \'vid\' => NULL,
      \'vuuid\' => \'5641a3f6-6242-4929-a3ba-a248f7f3b620\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'tx3u47vetul3pjiwqivfbwve46c4e6qi\',
            \'format\' => NULL,
            \'safe_value\' => \'tx3u47vetul3pjiwqivfbwve46c4e6qi\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/tx3u47vetul3pjiwqivfbwve46c4e6qi\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/tx3u47vetul3pjiwqivfbwve46c4e6qi\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'capital-project\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/tx3u47vetul3pjiwqivfbwve46c4e6qi?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/tx3u47vetul3pjiwqivfbwve46c4e6qi?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'canvas\',
          ),
        ),
      ),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'CTools Project Sites Migration Project\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'8cb7e542-14b0-41c3-a096-cbb59d04a9da\',
      \'vid\' => NULL,
      \'vuuid\' => \'cc6e3b87-ea73-4877-88e5-d1f44b185c6c\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'za4ksb954fi7rlc6guk18rxuox1n8363\',
            \'format\' => NULL,
            \'safe_value\' => \'za4ksb954fi7rlc6guk18rxuox1n8363\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/za4ksb954fi7rlc6guk18rxuox1n8363\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/za4ksb954fi7rlc6guk18rxuox1n8363\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/za4ksb954fi7rlc6guk18rxuox1n8363?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/za4ksb954fi7rlc6guk18rxuox1n8363?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Medical School Information Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Medical School Information Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Pre-matriculation Self-assessment Pilot\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'8ef4920c-8143-48d9-a527-2f158184e227\',
      \'vid\' => NULL,
      \'vuuid\' => \'abf100fa-e396-4d04-9425-f4036a7acc5e\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'6rnbpq3wiu0811kjqghv8ejndjehg2iw\',
            \'format\' => NULL,
            \'safe_value\' => \'6rnbpq3wiu0811kjqghv8ejndjehg2iw\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/6rnbpq3wiu0811kjqghv8ejndjehg2iw\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/6rnbpq3wiu0811kjqghv8ejndjehg2iw\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/6rnbpq3wiu0811kjqghv8ejndjehg2iw?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/6rnbpq3wiu0811kjqghv8ejndjehg2iw?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Changing the Perspective: Using Google Glass In Standardized Patient Exercises\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'8f710a68-4367-4671-8329-595d8859a0c7\',
      \'vid\' => NULL,
      \'vuuid\' => \'499be3f2-775a-4919-8e6d-e948afb578ad\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'jjl0c1hrb8teln6nsmg5hl6eqx683jat\',
            \'format\' => NULL,
            \'safe_value\' => \'jjl0c1hrb8teln6nsmg5hl6eqx683jat\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/jjl0c1hrb8teln6nsmg5hl6eqx683jat\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/jjl0c1hrb8teln6nsmg5hl6eqx683jat\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'engaged-learning\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/jjl0c1hrb8teln6nsmg5hl6eqx683jat?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/jjl0c1hrb8teln6nsmg5hl6eqx683jat?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'University of Michigan Library\',
            \'format\' => NULL,
            \'safe_value\' => \'University of Michigan Library\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Enhancing Library Instruction with Digital Instruction Technologies\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'8fcdab67-b4f2-46fc-bb17-3c2a34f2cc21\',
      \'vid\' => NULL,
      \'vuuid\' => \'97faf277-58d7-45fa-a183-c1e49f6ead79\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'pq99g51jyj5jokue5c1muhnxcdslebx5\',
            \'format\' => NULL,
            \'safe_value\' => \'pq99g51jyj5jokue5c1muhnxcdslebx5\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/pq99g51jyj5jokue5c1muhnxcdslebx5\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/pq99g51jyj5jokue5c1muhnxcdslebx5\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/pq99g51jyj5jokue5c1muhnxcdslebx5?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/pq99g51jyj5jokue5c1muhnxcdslebx5?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Information & Technology Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Information &amp; Technology Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'MCoverage: Using Crowdsourced Data for Cellular Coverage Analysis\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'91cb84f1-105b-4a9b-8b95-1d51e78389ba\',
      \'vid\' => NULL,
      \'vuuid\' => \'a643dc52-be08-4ce6-9417-93e7e677912f\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'62we86384kklnrrehw0gf1sekvv14gvv\',
            \'format\' => NULL,
            \'safe_value\' => \'62we86384kklnrrehw0gf1sekvv14gvv\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/62we86384kklnrrehw0gf1sekvv14gvv\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/62we86384kklnrrehw0gf1sekvv14gvv\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'community-of-practice\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/62we86384kklnrrehw0gf1sekvv14gvv?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/62we86384kklnrrehw0gf1sekvv14gvv?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Communities of Practice\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'93e7d9b1-209b-48c9-a040-b880951ef3a9\',
      \'vid\' => NULL,
      \'vuuid\' => \'bd09b348-f652-44eb-a39b-d4877239567c\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'vhzw8vl5pmrjg3xqpxwzshlhvdil5gza\',
            \'format\' => NULL,
            \'safe_value\' => \'vhzw8vl5pmrjg3xqpxwzshlhvdil5gza\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/vhzw8vl5pmrjg3xqpxwzshlhvdil5gza\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/vhzw8vl5pmrjg3xqpxwzshlhvdil5gza\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/vhzw8vl5pmrjg3xqpxwzshlhvdil5gza?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/vhzw8vl5pmrjg3xqpxwzshlhvdil5gza?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'University of Michigan Health System\',
            \'format\' => NULL,
            \'safe_value\' => \'University of Michigan Health System\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'UMHS Dataset Catalog: A Novel Approach to Linked Metadata\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'94a06311-eecb-49ca-b5af-f3f3fcbc4bb9\',
      \'vid\' => NULL,
      \'vuuid\' => \'e657603f-4dce-4e0b-8138-b7765d4d8474\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'12r1sryam1n4k1tadw4jsv2570fb94c3\',
            \'format\' => NULL,
            \'safe_value\' => \'12r1sryam1n4k1tadw4jsv2570fb94c3\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/12r1sryam1n4k1tadw4jsv2570fb94c3\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/12r1sryam1n4k1tadw4jsv2570fb94c3\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'engaged-learning\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/12r1sryam1n4k1tadw4jsv2570fb94c3?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/12r1sryam1n4k1tadw4jsv2570fb94c3?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'canvas\',
          ),
        ),
      ),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'MiVideo Team\',
            \'format\' => NULL,
            \'safe_value\' => \'MiVideo Team\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Amp Up Your Media: Creating Engaging Presentations in Canvas\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'956f95a1-15f6-45aa-9bef-e4becc8eda48\',
      \'vid\' => NULL,
      \'vuuid\' => \'9e960916-51eb-4b65-8e0a-d9fcfc797972\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'tl7r517t24hn896nwzjrwyxjr4e0j6u0\',
            \'format\' => NULL,
            \'safe_value\' => \'tl7r517t24hn896nwzjrwyxjr4e0j6u0\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/tl7r517t24hn896nwzjrwyxjr4e0j6u0\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/tl7r517t24hn896nwzjrwyxjr4e0j6u0\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'community-of-practice\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/tl7r517t24hn896nwzjrwyxjr4e0j6u0?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/tl7r517t24hn896nwzjrwyxjr4e0j6u0?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Geographic Information Systems Community of Practice\',
            \'format\' => NULL,
            \'safe_value\' => \'Geographic Information Systems Community of Practice\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Geographic Information Systems (GIS) Community of Practice\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'9b19cfb9-50d7-46ff-8358-06e0e17772a6\',
      \'vid\' => NULL,
      \'vuuid\' => \'dc0d8c75-4c84-45b0-a222-ebe7d47c8c19\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'n6u5g2xs5oulsqocj2hg6bhf6emxjay0\',
            \'format\' => NULL,
            \'safe_value\' => \'n6u5g2xs5oulsqocj2hg6bhf6emxjay0\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/n6u5g2xs5oulsqocj2hg6bhf6emxjay0\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/n6u5g2xs5oulsqocj2hg6bhf6emxjay0\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'interdisciplinary-collaboration\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/n6u5g2xs5oulsqocj2hg6bhf6emxjay0?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/n6u5g2xs5oulsqocj2hg6bhf6emxjay0?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Information & Technology Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Information &amp; Technology Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Engaging Campus with a Contest\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'9e7af5bf-757f-4c04-b18a-9470f08c87af\',
      \'vid\' => NULL,
      \'vuuid\' => \'02e41455-86f4-40b9-9664-d2df859d58bc\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'jq5v8fkh6ogaoeor909iyey2lwu190cf\',
            \'format\' => NULL,
            \'safe_value\' => \'jq5v8fkh6ogaoeor909iyey2lwu190cf\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/jq5v8fkh6ogaoeor909iyey2lwu190cf\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/jq5v8fkh6ogaoeor909iyey2lwu190cf\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'community-of-practice\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/jq5v8fkh6ogaoeor909iyey2lwu190cf?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/jq5v8fkh6ogaoeor909iyey2lwu190cf?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Contact Center Community of Practice\',
            \'format\' => NULL,
            \'safe_value\' => \'Contact Center Community of Practice\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Contact Centers Community of Practice\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'a1170170-ce69-4f27-be17-c11209f4d516\',
      \'vid\' => NULL,
      \'vuuid\' => \'038bc34d-68aa-491a-96a1-4cd27ea05a6b\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'a6czbeo7l68w00p0a08fzrj0flas1puj\',
            \'format\' => NULL,
            \'safe_value\' => \'a6czbeo7l68w00p0a08fzrj0flas1puj\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/a6czbeo7l68w00p0a08fzrj0flas1puj\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/a6czbeo7l68w00p0a08fzrj0flas1puj\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'engaged-learning\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/a6czbeo7l68w00p0a08fzrj0flas1puj?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/a6czbeo7l68w00p0a08fzrj0flas1puj?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'canvas\',
          ),
        ),
      ),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Canvas Sub-Accounts: A Hidden Layer of Capabilities\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'a25e0ae1-b23b-41a1-a73b-17c4ebf1a9af\',
      \'vid\' => NULL,
      \'vuuid\' => \'41970742-0af9-4e78-86a8-cf5c52a640ce\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2pap31iyaupt1iq25nmbtd2qa7mfkc68\',
            \'format\' => NULL,
            \'safe_value\' => \'2pap31iyaupt1iq25nmbtd2qa7mfkc68\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/2pap31iyaupt1iq25nmbtd2qa7mfkc68\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/2pap31iyaupt1iq25nmbtd2qa7mfkc68\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'community-of-practice\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/2pap31iyaupt1iq25nmbtd2qa7mfkc68?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/2pap31iyaupt1iq25nmbtd2qa7mfkc68?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Web Services Community of Practice\',
            \'format\' => NULL,
            \'safe_value\' => \'Web Services Community of Practice\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Web Services Community of Practice\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'a27fd0fc-8424-4586-8ced-915bdb4a5503\',
      \'vid\' => NULL,
      \'vuuid\' => \'a35b0e0d-bdd3-4884-8863-a7fe74683412\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'z352fqyu2s1w8zwfgs0vmji4u02ed2xe\',
            \'format\' => NULL,
            \'safe_value\' => \'z352fqyu2s1w8zwfgs0vmji4u02ed2xe\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/z352fqyu2s1w8zwfgs0vmji4u02ed2xe\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/z352fqyu2s1w8zwfgs0vmji4u02ed2xe\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/z352fqyu2s1w8zwfgs0vmji4u02ed2xe?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/z352fqyu2s1w8zwfgs0vmji4u02ed2xe?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Information & Technology Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Information &amp; Technology Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'M+Google and M+Box: Usage & Statistics\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'a2e85049-bfb1-4a95-89db-af7cc95f4d7e\',
      \'vid\' => NULL,
      \'vuuid\' => \'ea590bb6-f197-4594-85be-369d31fbaeb6\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'yaujttxm1dryckjgkrqwith6d88pwz4l\',
            \'format\' => NULL,
            \'safe_value\' => \'yaujttxm1dryckjgkrqwith6d88pwz4l\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/yaujttxm1dryckjgkrqwith6d88pwz4l\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/yaujttxm1dryckjgkrqwith6d88pwz4l\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'soft-skills\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/yaujttxm1dryckjgkrqwith6d88pwz4l?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/yaujttxm1dryckjgkrqwith6d88pwz4l?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Climate and Space Sciences and Engineering\',
            \'format\' => NULL,
            \'safe_value\' => \'Climate and Space Sciences and Engineering\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Fulfilling Mandates\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'a458e07f-18a3-4455-9889-143ed893b220\',
      \'vid\' => NULL,
      \'vuuid\' => \'e566b001-890b-4668-a5f6-2fefef89b230\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'y46q7ec6efipsnrglcxiug15rzso0xhr\',
            \'format\' => NULL,
            \'safe_value\' => \'y46q7ec6efipsnrglcxiug15rzso0xhr\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/y46q7ec6efipsnrglcxiug15rzso0xhr\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/y46q7ec6efipsnrglcxiug15rzso0xhr\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/y46q7ec6efipsnrglcxiug15rzso0xhr?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/y46q7ec6efipsnrglcxiug15rzso0xhr?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'U-M School of Information\',
            \'format\' => NULL,
            \'safe_value\' => \'U-M School of Information\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'TeamworkPM: Streamlining UMSI Onboarding\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'a4eed0b0-e9cf-4f6c-9839-8d48873cc9b2\',
      \'vid\' => NULL,
      \'vuuid\' => \'7299d6eb-0b20-4923-a0c2-3d5ef691f465\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'yl31chmpqyj2wzblln4yb5zbfa2a92mr\',
            \'format\' => NULL,
            \'safe_value\' => \'yl31chmpqyj2wzblln4yb5zbfa2a92mr\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/yl31chmpqyj2wzblln4yb5zbfa2a92mr\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/yl31chmpqyj2wzblln4yb5zbfa2a92mr\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/yl31chmpqyj2wzblln4yb5zbfa2a92mr?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/yl31chmpqyj2wzblln4yb5zbfa2a92mr?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'PACE ETL Manager Framework\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'a676b49a-159e-4878-9bc4-a7b92f8ad3cb\',
      \'vid\' => NULL,
      \'vuuid\' => \'c7cb7dd1-f801-4262-bea2-7d55b69c7c89\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2njzptgeejf7du8so8k13lhmny4iyi43\',
            \'format\' => NULL,
            \'safe_value\' => \'2njzptgeejf7du8so8k13lhmny4iyi43\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/2njzptgeejf7du8so8k13lhmny4iyi43\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/2njzptgeejf7du8so8k13lhmny4iyi43\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/2njzptgeejf7du8so8k13lhmny4iyi43?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/2njzptgeejf7du8so8k13lhmny4iyi43?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Information & Technology Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Information &amp; Technology Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Core Infrastructure Managed Services\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'b3b789ea-9fea-419c-9bfa-486f298a261c\',
      \'vid\' => NULL,
      \'vuuid\' => \'d527ae43-335b-4750-8f6f-daa1f8a462b4\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'ykgdukh10jlha0djxy5gosl00y4zsblp\',
            \'format\' => NULL,
            \'safe_value\' => \'ykgdukh10jlha0djxy5gosl00y4zsblp\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/ykgdukh10jlha0djxy5gosl00y4zsblp\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/ykgdukh10jlha0djxy5gosl00y4zsblp\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'interdisciplinary-collaboration\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/ykgdukh10jlha0djxy5gosl00y4zsblp?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/ykgdukh10jlha0djxy5gosl00y4zsblp?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'API Manager: Provisioning an API Economy\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'b5f04516-b7b2-4822-aa0d-daf01f38a2ef\',
      \'vid\' => NULL,
      \'vuuid\' => \'9b121acc-61d7-4fd3-a2e1-70b9bce26a98\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'4ospzrkke2yjjxqm10dg6zqcheg8xkrc\',
            \'format\' => NULL,
            \'safe_value\' => \'4ospzrkke2yjjxqm10dg6zqcheg8xkrc\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/4ospzrkke2yjjxqm10dg6zqcheg8xkrc\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/4ospzrkke2yjjxqm10dg6zqcheg8xkrc\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/4ospzrkke2yjjxqm10dg6zqcheg8xkrc?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/4ospzrkke2yjjxqm10dg6zqcheg8xkrc?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Advanced Research Computing Technology Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Advanced Research Computing Technology Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Turbo Research Storage\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'b9f7b05e-51ac-46d5-b3c4-e54e55172165\',
      \'vid\' => NULL,
      \'vuuid\' => \'38754124-57aa-41e1-9c15-34eebc3f6049\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'u4rp97djmkyzd0wq970tju8sq2cb0st7\',
            \'format\' => NULL,
            \'safe_value\' => \'u4rp97djmkyzd0wq970tju8sq2cb0st7\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/u4rp97djmkyzd0wq970tju8sq2cb0st7\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/u4rp97djmkyzd0wq970tju8sq2cb0st7\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/u4rp97djmkyzd0wq970tju8sq2cb0st7?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/u4rp97djmkyzd0wq970tju8sq2cb0st7?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'U-M School of Information\',
            \'format\' => NULL,
            \'safe_value\' => \'U-M School of Information\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Text-able Answers: An iClicker Alternative\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'bae10350-ecd0-4d1e-86be-7f8bf30c70d6\',
      \'vid\' => NULL,
      \'vuuid\' => \'d84fc10d-1134-4c17-8f11-7ff99e3c45cb\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'4gdbppx01cgrua1a5wht3kcqspmr6rk4\',
            \'format\' => NULL,
            \'safe_value\' => \'4gdbppx01cgrua1a5wht3kcqspmr6rk4\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/4gdbppx01cgrua1a5wht3kcqspmr6rk4\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/4gdbppx01cgrua1a5wht3kcqspmr6rk4\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'community-of-practice\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/4gdbppx01cgrua1a5wht3kcqspmr6rk4?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/4gdbppx01cgrua1a5wht3kcqspmr6rk4?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Storage Community of Practice\',
            \'format\' => NULL,
            \'safe_value\' => \'Storage Community of Practice\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Storage Community of Practice\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'bfca2ad8-8414-40d4-848b-9cf7db4fb5a0\',
      \'vid\' => NULL,
      \'vuuid\' => \'a522a29f-8acd-44f6-a0fe-d9e5de2e2bbc\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'pgdptl912ul40fphyevdvzwj1rhro9g3\',
            \'format\' => NULL,
            \'safe_value\' => \'pgdptl912ul40fphyevdvzwj1rhro9g3\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/pgdptl912ul40fphyevdvzwj1rhro9g3\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/pgdptl912ul40fphyevdvzwj1rhro9g3\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/pgdptl912ul40fphyevdvzwj1rhro9g3?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/pgdptl912ul40fphyevdvzwj1rhro9g3?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'research\',
          ),
        ),
      ),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'LSA\',
            \'format\' => NULL,
            \'safe_value\' => \'LSA\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'LSA Research Programming & Applications\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'c696faec-cea3-4582-8e6a-8c2c4e5c58fc\',
      \'vid\' => NULL,
      \'vuuid\' => \'2cc3b975-0466-4e36-93e9-4c62c2ad900d\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'c14f183erb9v7wg4nxf2r2j2hako7glo\',
            \'format\' => NULL,
            \'safe_value\' => \'c14f183erb9v7wg4nxf2r2j2hako7glo\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/c14f183erb9v7wg4nxf2r2j2hako7glo\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/c14f183erb9v7wg4nxf2r2j2hako7glo\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/c14f183erb9v7wg4nxf2r2j2hako7glo?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/c14f183erb9v7wg4nxf2r2j2hako7glo?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Remote Desktop Services\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'c86a55ba-3ae5-414e-a970-975d9c2a41d8\',
      \'vid\' => NULL,
      \'vuuid\' => \'57b0f25b-dec0-415f-92a5-687bf6d7f417\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'lcep5ebtgxzeqbhhef0jhawd6smpig4g\',
            \'format\' => NULL,
            \'safe_value\' => \'lcep5ebtgxzeqbhhef0jhawd6smpig4g\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/lcep5ebtgxzeqbhhef0jhawd6smpig4g\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/lcep5ebtgxzeqbhhef0jhawd6smpig4g\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/lcep5ebtgxzeqbhhef0jhawd6smpig4g?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/lcep5ebtgxzeqbhhef0jhawd6smpig4g?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'alumni\',
          ),
        ),
      ),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Office of University Development Prospect Development & Analytics\',
            \'format\' => NULL,
            \'safe_value\' => \'Office of University Development Prospect Development &amp; Analytics\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'GO Guide - A Tool for Gauging Wealth\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'cc262506-0de9-4bfb-8b10-691ecb7a301c\',
      \'vid\' => NULL,
      \'vuuid\' => \'1310f8e8-37f1-41b8-b90a-ab1b73e8169f\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'e2uodq7qv3ghpg1wqmo4mpa5483abjqy\',
            \'format\' => NULL,
            \'safe_value\' => \'e2uodq7qv3ghpg1wqmo4mpa5483abjqy\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/e2uodq7qv3ghpg1wqmo4mpa5483abjqy\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/e2uodq7qv3ghpg1wqmo4mpa5483abjqy\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/e2uodq7qv3ghpg1wqmo4mpa5483abjqy?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/e2uodq7qv3ghpg1wqmo4mpa5483abjqy?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Medical School Information Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Medical School Information Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'MSIS Book Publishing Program\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'d0a43fac-d64d-4fcc-862c-e69e3356d2b3\',
      \'vid\' => NULL,
      \'vuuid\' => \'b9ba5dce-c095-45c2-8887-5a8892165184\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'mljlyug5zapprxp5rg9xo51vg80ljjxm\',
            \'format\' => NULL,
            \'safe_value\' => \'mljlyug5zapprxp5rg9xo51vg80ljjxm\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/mljlyug5zapprxp5rg9xo51vg80ljjxm\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/mljlyug5zapprxp5rg9xo51vg80ljjxm\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'soft-skills\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/mljlyug5zapprxp5rg9xo51vg80ljjxm?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/mljlyug5zapprxp5rg9xo51vg80ljjxm?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Information & Technology Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Information &amp; Technology Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'ITS Summer Internship Program\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'d1aef263-98e2-4c18-bc07-27cd3681f61c\',
      \'vid\' => NULL,
      \'vuuid\' => \'c9c4b0c8-69f2-4be5-90dc-ed4f1ebcbd10\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'k1x3u8jo7x3atowegvxs30qelwpzdp97\',
            \'format\' => NULL,
            \'safe_value\' => \'k1x3u8jo7x3atowegvxs30qelwpzdp97\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/k1x3u8jo7x3atowegvxs30qelwpzdp97\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/k1x3u8jo7x3atowegvxs30qelwpzdp97\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'interdisciplinary-collaboration\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/k1x3u8jo7x3atowegvxs30qelwpzdp97?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/k1x3u8jo7x3atowegvxs30qelwpzdp97?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'UMICH IT Asset Management\',
            \'format\' => NULL,
            \'safe_value\' => \'UMICH IT Asset Management\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Got Software? \',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'d2c6981c-282e-45ff-b6a8-23e29406a90c\',
      \'vid\' => NULL,
      \'vuuid\' => \'a4ec38f8-e3f3-4ef0-990c-55868ebc207b\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'mt2vxnebddn3lz04ca4ukt05dmugau4p\',
            \'format\' => NULL,
            \'safe_value\' => \'mt2vxnebddn3lz04ca4ukt05dmugau4p\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/mt2vxnebddn3lz04ca4ukt05dmugau4p\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/mt2vxnebddn3lz04ca4ukt05dmugau4p\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/mt2vxnebddn3lz04ca4ukt05dmugau4p?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/mt2vxnebddn3lz04ca4ukt05dmugau4p?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'LSA Shared Services\',
            \'format\' => NULL,
            \'safe_value\' => \'LSA Shared Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Sutomating a Manual Process: A SharePoint and Nintex Story\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'d3903049-6974-47ad-a194-ce19c0842ec1\',
      \'vid\' => NULL,
      \'vuuid\' => \'0eb765f0-1fb9-41b3-99f7-6c7a17eb92c5\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'dh2msn5s7znoygqv173kdd5q7nzgoqnq\',
            \'format\' => NULL,
            \'safe_value\' => \'dh2msn5s7znoygqv173kdd5q7nzgoqnq\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/dh2msn5s7znoygqv173kdd5q7nzgoqnq\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/dh2msn5s7znoygqv173kdd5q7nzgoqnq\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'soft-skills\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/dh2msn5s7znoygqv173kdd5q7nzgoqnq?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/dh2msn5s7znoygqv173kdd5q7nzgoqnq?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Talk Tech with #MichiganIT\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'d52f23b1-17a1-4a9f-866e-e06ff57f408d\',
      \'vid\' => NULL,
      \'vuuid\' => \'2bc87ee7-9f41-4ae1-8b45-e92c2ea2ba0d\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'tq9rvumyiw3r36irp4i6haduaexvzj6w\',
            \'format\' => NULL,
            \'safe_value\' => \'tq9rvumyiw3r36irp4i6haduaexvzj6w\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/tq9rvumyiw3r36irp4i6haduaexvzj6w\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/tq9rvumyiw3r36irp4i6haduaexvzj6w\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/tq9rvumyiw3r36irp4i6haduaexvzj6w?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/tq9rvumyiw3r36irp4i6haduaexvzj6w?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Medical School Information Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Medical School Information Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Attestation Service - A Key to ePHI Data\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'d74a3123-9b0f-4619-97c3-66f1d245dcb5\',
      \'vid\' => NULL,
      \'vuuid\' => \'f1b049fb-e773-46f1-828e-7ae285eb1779\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'3slpwfk8dq48veduzsz2fazrhcuceg58\',
            \'format\' => NULL,
            \'safe_value\' => \'3slpwfk8dq48veduzsz2fazrhcuceg58\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/3slpwfk8dq48veduzsz2fazrhcuceg58\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/3slpwfk8dq48veduzsz2fazrhcuceg58\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'soft-skills\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/3slpwfk8dq48veduzsz2fazrhcuceg58?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/3slpwfk8dq48veduzsz2fazrhcuceg58?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Mott Family Network\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'d782badd-fd49-4700-b8cd-f80202c8bd01\',
      \'vid\' => NULL,
      \'vuuid\' => \'ac001cd5-d536-4def-b41a-bcd59b545737\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'qxwrzc2znal22lsc7ioc7q0cbrlrfr0i\',
            \'format\' => NULL,
            \'safe_value\' => \'qxwrzc2znal22lsc7ioc7q0cbrlrfr0i\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/qxwrzc2znal22lsc7ioc7q0cbrlrfr0i\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/qxwrzc2znal22lsc7ioc7q0cbrlrfr0i\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/qxwrzc2znal22lsc7ioc7q0cbrlrfr0i?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/qxwrzc2znal22lsc7ioc7q0cbrlrfr0i?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'College of Engineering Integrative Systems and Design\',
            \'format\' => NULL,
            \'safe_value\' => \'College of Engineering Integrative Systems and Design\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'HDBaseT: Content Sharing in the Classroom\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'d7c54572-072b-455a-b9b7-65d372b174cd\',
      \'vid\' => NULL,
      \'vuuid\' => \'29d82d14-cdbc-48f3-a3a0-b5d6f127659c\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'6zjsdiacllddzitlaxbad1d51nt6espj\',
            \'format\' => NULL,
            \'safe_value\' => \'6zjsdiacllddzitlaxbad1d51nt6espj\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/6zjsdiacllddzitlaxbad1d51nt6espj\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/6zjsdiacllddzitlaxbad1d51nt6espj\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/6zjsdiacllddzitlaxbad1d51nt6espj?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/6zjsdiacllddzitlaxbad1d51nt6espj?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Information & Technology Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Information &amp; Technology Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Securing Your Content in M+Box\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'d9ff3539-19a1-4e41-8c1d-f68abd8afbc9\',
      \'vid\' => NULL,
      \'vuuid\' => \'139a120e-ec87-4305-9629-2fcb933765d0\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'nvw93wmgechkhpp49f0ift451tycpx1r\',
            \'format\' => NULL,
            \'safe_value\' => \'nvw93wmgechkhpp49f0ift451tycpx1r\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/nvw93wmgechkhpp49f0ift451tycpx1r\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/nvw93wmgechkhpp49f0ift451tycpx1r\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'internet-of-things\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/nvw93wmgechkhpp49f0ift451tycpx1r?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/nvw93wmgechkhpp49f0ift451tycpx1r?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'School of Dentistry\',
            \'format\' => NULL,
            \'safe_value\' => \'School of Dentistry\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Automation of a Complex Approval Process at the School of Dentistry using DocuSign\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'dc105e8b-2b61-4237-8ded-21ea1e28ce6d\',
      \'vid\' => NULL,
      \'vuuid\' => \'be76af40-abd5-4dd4-a04b-db0190aef79c\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'3g2y0r1cf3oblb6xqrpbxu9g1cr5swx2\',
            \'format\' => NULL,
            \'safe_value\' => \'3g2y0r1cf3oblb6xqrpbxu9g1cr5swx2\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/3g2y0r1cf3oblb6xqrpbxu9g1cr5swx2\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/3g2y0r1cf3oblb6xqrpbxu9g1cr5swx2\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'soft-skills\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/3g2y0r1cf3oblb6xqrpbxu9g1cr5swx2?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/3g2y0r1cf3oblb6xqrpbxu9g1cr5swx2?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'LSA\',
            \'format\' => NULL,
            \'safe_value\' => \'LSA\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Starfish Story\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'e008110f-6511-445a-a7e6-6b416eb98a82\',
      \'vid\' => NULL,
      \'vuuid\' => \'308a0038-5466-45b9-baee-8048cf25071b\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'88ifjvr9uz3j26sytvzfkk3rz8t1n2cg\',
            \'format\' => NULL,
            \'safe_value\' => \'88ifjvr9uz3j26sytvzfkk3rz8t1n2cg\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/88ifjvr9uz3j26sytvzfkk3rz8t1n2cg\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/88ifjvr9uz3j26sytvzfkk3rz8t1n2cg\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'interdisciplinary-collaboration\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/88ifjvr9uz3j26sytvzfkk3rz8t1n2cg?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/88ifjvr9uz3j26sytvzfkk3rz8t1n2cg?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Medical School Information Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Medical School Information Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Measuring the Success of a Service-Oriented Architecture\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'e128ef04-12d6-4ea4-9495-a7cc570597c8\',
      \'vid\' => NULL,
      \'vuuid\' => \'82563b71-b1e6-47e1-9e60-e3c73a563c5a\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'w3ete1dmnulfrg1avnx48jgovyyrokka\',
            \'format\' => NULL,
            \'safe_value\' => \'w3ete1dmnulfrg1avnx48jgovyyrokka\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/w3ete1dmnulfrg1avnx48jgovyyrokka\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/w3ete1dmnulfrg1avnx48jgovyyrokka\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/w3ete1dmnulfrg1avnx48jgovyyrokka?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/w3ete1dmnulfrg1avnx48jgovyyrokka?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'presentation\',
          ),
        ),
      ),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'MGoView: Using Augmented Reality to Explore the Social Riches of the U-M Campus\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'e44b9b3e-600d-48c2-8aed-8fc5c3536e34\',
      \'vid\' => NULL,
      \'vuuid\' => \'ff75602b-86aa-43a4-a47c-e5ff3eb453cd\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'bx6s2ic3swbl2p3nh896bkazn25qj9x2\',
            \'format\' => NULL,
            \'safe_value\' => \'bx6s2ic3swbl2p3nh896bkazn25qj9x2\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/bx6s2ic3swbl2p3nh896bkazn25qj9x2\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/bx6s2ic3swbl2p3nh896bkazn25qj9x2\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<iframe  src="https://app.box.com/embed/preview/bx6s2ic3swbl2p3nh896bkazn25qj9x2?view=&sort=&direction=ASC&theme=light" width="330" height="300" frameborder="0" allowfullscreen webkitallowfullscreen msallowfullscreen></iframe>\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => \'<iframe src="https://app.box.com/embed/preview/bx6s2ic3swbl2p3nh896bkazn25qj9x2?view=&amp;sort=&amp;direction=ASC&amp;theme=light" width="330" height="300" frameborder="0" allowfullscreen="" webkitallowfullscreen="" msallowfullscreen=""></iframe>\',
          ),
        ),
      ),
      \'field_level_2_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'mobile\',
          ),
        ),
      ),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Information & Technology Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Information &amp; Technology Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'MCommunity Directory Meets Responsive Redesign\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'e887862c-fbac-453b-b2bf-a10dd40e1311\',
      \'vid\' => NULL,
      \'vuuid\' => \'e6977c6d-02a2-44ce-aa27-4900bb1d2349\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'pj2ilucbxyjmi4xzehqzepdxon3iqjen\',
            \'format\' => NULL,
            \'safe_value\' => \'pj2ilucbxyjmi4xzehqzepdxon3iqjen\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/pj2ilucbxyjmi4xzehqzepdxon3iqjen\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/pj2ilucbxyjmi4xzehqzepdxon3iqjen\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'interdisciplinary-collaboration\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/pj2ilucbxyjmi4xzehqzepdxon3iqjen?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/pj2ilucbxyjmi4xzehqzepdxon3iqjen?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'canvas\',
          ),
        ),
      ),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Convert2Canvas: Helping Campus Make the Move from CTools to Canvas\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'ed2af3ab-fe1a-4a6e-8ae1-3f7c10347ec1\',
      \'vid\' => NULL,
      \'vuuid\' => \'7e0907e0-8292-46b4-850b-4c275423fe3d\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'m6jztfp0u9cekb1yc5654tyyx4zwjo7z\',
            \'format\' => NULL,
            \'safe_value\' => \'m6jztfp0u9cekb1yc5654tyyx4zwjo7z\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/m6jztfp0u9cekb1yc5654tyyx4zwjo7z\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/m6jztfp0u9cekb1yc5654tyyx4zwjo7z\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/m6jztfp0u9cekb1yc5654tyyx4zwjo7z?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/m6jztfp0u9cekb1yc5654tyyx4zwjo7z?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'LSA Web Services\',
            \'format\' => NULL,
            \'safe_value\' => \'LSA Web Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'WordPress Multisite\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'ee9c8eac-d128-4575-b47b-a8060db24f6a\',
      \'vid\' => NULL,
      \'vuuid\' => \'a332e6d5-a4ea-4f8a-a885-d538c513cfd8\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1puzhxg57ady2oe880rqi24njv5l19wj\',
            \'format\' => NULL,
            \'safe_value\' => \'1puzhxg57ady2oe880rqi24njv5l19wj\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/1puzhxg57ady2oe880rqi24njv5l19wj\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/1puzhxg57ady2oe880rqi24njv5l19wj\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/1puzhxg57ady2oe880rqi24njv5l19wj?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/1puzhxg57ady2oe880rqi24njv5l19wj?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'alumni\',
          ),
        ),
      ),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Ford School\',
            \'format\' => NULL,
            \'safe_value\' => \'Ford School\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Effectively Tracking Alumni in Access and DART\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'f110d79d-0959-470b-99da-32df99795a74\',
      \'vid\' => NULL,
      \'vuuid\' => \'31cd986c-b6f9-4145-ab9d-81585fc2ff75\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'6j6k7x584zmb05e44ez5mb3qtulp6j9c\',
            \'format\' => NULL,
            \'safe_value\' => \'6j6k7x584zmb05e44ez5mb3qtulp6j9c\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/6j6k7x584zmb05e44ez5mb3qtulp6j9c\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/6j6k7x584zmb05e44ez5mb3qtulp6j9c\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/6j6k7x584zmb05e44ez5mb3qtulp6j9c?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/6j6k7x584zmb05e44ez5mb3qtulp6j9c?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'employee-performance\',
          ),
        ),
      ),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'ITS Communications Systems and Data Centers Business Services\',
            \'format\' => NULL,
            \'safe_value\' => \'ITS Communications Systems and Data Centers Business Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Conducting a 360-degree Performance Review using SharePoint\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'f368c1e5-0dbc-490d-acf4-d2c7dd1f6e2c\',
      \'vid\' => NULL,
      \'vuuid\' => \'ccc613ae-2494-47bf-8461-1c184013219f\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'t0s6s7ldgr03aamwf4n7iw0a1kg2u2so\',
            \'format\' => NULL,
            \'safe_value\' => \'t0s6s7ldgr03aamwf4n7iw0a1kg2u2so\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/t0s6s7ldgr03aamwf4n7iw0a1kg2u2so\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/t0s6s7ldgr03aamwf4n7iw0a1kg2u2so\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/t0s6s7ldgr03aamwf4n7iw0a1kg2u2so?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/t0s6s7ldgr03aamwf4n7iw0a1kg2u2so?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Medical School Information Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Medical School Information Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Accelerating Data Federation through Data Virtualization\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'f39a1538-8cfa-4f83-b656-c4ea4f0fd01a\',
      \'vid\' => NULL,
      \'vuuid\' => \'c255f745-0127-4576-a133-ba80909775dc\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'o2q71ep8xg40urjpiwooeesthprq8cn1\',
            \'format\' => NULL,
            \'safe_value\' => \'o2q71ep8xg40urjpiwooeesthprq8cn1\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/o2q71ep8xg40urjpiwooeesthprq8cn1\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/o2q71ep8xg40urjpiwooeesthprq8cn1\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/o2q71ep8xg40urjpiwooeesthprq8cn1?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/o2q71ep8xg40urjpiwooeesthprq8cn1?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'canvas\',
          ),
        ),
      ),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Information & Technology Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Information &amp; Technology Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Bringing the MCommunity into Canvas\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'fa17b260-b904-4aaf-b914-08c44cd379b4\',
      \'vid\' => NULL,
      \'vuuid\' => \'ac76d5b7-af51-41b2-8cfa-0116944fffed\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0diap93lufyinec5v07alc8x04r056io\',
            \'format\' => NULL,
            \'safe_value\' => \'0diap93lufyinec5v07alc8x04r056io\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/0diap93lufyinec5v07alc8x04r056io\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/0diap93lufyinec5v07alc8x04r056io\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/0diap93lufyinec5v07alc8x04r056io?theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/0diap93lufyinec5v07alc8x04r056io?theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Information & Technology Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Information &amp; Technology Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'1,300 Exams: A Pilot Combining ITS Services for a New Solution\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'fa308bb7-ee5d-403d-ae40-0d4145465f3f\',
      \'vid\' => NULL,
      \'vuuid\' => \'cb821ffe-2198-4f26-9a95-7b218a9a7be6\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'xxqtl0j3i50l8f6vol4c3glly5suc594\',
            \'format\' => NULL,
            \'safe_value\' => \'xxqtl0j3i50l8f6vol4c3glly5suc594\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/xxqtl0j3i50l8f6vol4c3glly5suc594\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/xxqtl0j3i50l8f6vol4c3glly5suc594\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/xxqtl0j3i50l8f6vol4c3glly5suc594?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/xxqtl0j3i50l8f6vol4c3glly5suc594?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Multifactor Authentication\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'fa37feb4-01dd-44bc-ae61-1dfd3448d593\',
      \'vid\' => NULL,
      \'vuuid\' => \'f61be67b-5a6e-4a1d-a68d-a050b9ff9b40\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'p6mdg1atq6j581fgutfofe6ckvee2aeg\',
            \'format\' => NULL,
            \'safe_value\' => \'p6mdg1atq6j581fgutfofe6ckvee2aeg\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/p6mdg1atq6j581fgutfofe6ckvee2aeg\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/p6mdg1atq6j581fgutfofe6ckvee2aeg\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/p6mdg1atq6j581fgutfofe6ckvee2aeg?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/p6mdg1atq6j581fgutfofe6ckvee2aeg?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Information & Technology Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Information &amp; Technology Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Collaborative Technologies\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'fa457ca6-2f6b-4ee9-a0c1-ef26724a243e\',
      \'vid\' => NULL,
      \'vuuid\' => \'b001c0f4-c0d3-4a73-ade8-00452726d609\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'csmp0nnevrw251vwd62aa4v8mgfulkfe\',
            \'format\' => NULL,
            \'safe_value\' => \'csmp0nnevrw251vwd62aa4v8mgfulkfe\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/csmp0nnevrw251vwd62aa4v8mgfulkfe\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/csmp0nnevrw251vwd62aa4v8mgfulkfe\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/csmp0nnevrw251vwd62aa4v8mgfulkfe?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/csmp0nnevrw251vwd62aa4v8mgfulkfe?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Department of Psychiatry, Department of Computer Science Engineering, Medical School Information Services\',
            \'format\' => NULL,
            \'safe_value\' => \'Department of Psychiatry, Department of Computer Science Engineering, Medical School Information Services\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Mood State Prediction for Individuals with Bipolar Disorder using a Cloud Computing Solution for Large-Scale Data\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'fc0387a4-01af-4d37-8e3c-496e3b6fb1c0\',
      \'vid\' => NULL,
      \'vuuid\' => \'69b16edd-7fb4-4b38-a45c-c8066a53eb23\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2qf0p4rvidg7j5w6eqc0hlc76n2qdaw5\',
            \'format\' => NULL,
            \'safe_value\' => \'2qf0p4rvidg7j5w6eqc0hlc76n2qdaw5\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/2qf0p4rvidg7j5w6eqc0hlc76n2qdaw5\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/2qf0p4rvidg7j5w6eqc0hlc76n2qdaw5\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/2qf0p4rvidg7j5w6eqc0hlc76n2qdaw5?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/2qf0p4rvidg7j5w6eqc0hlc76n2qdaw5?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'School of Social Work\',
            \'format\' => NULL,
            \'safe_value\' => \'School of Social Work\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'School of Social Work Room Reservation System\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'fc166823-ba50-41f4-af79-2cb9c05e3846\',
      \'vid\' => NULL,
      \'vuuid\' => \'b9ae3bc7-2d57-408a-b278-38548b070bd7\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'t7hyjty07h5ykg129do0tf9q1zzcgq1y\',
            \'format\' => NULL,
            \'safe_value\' => \'t7hyjty07h5ykg129do0tf9q1zzcgq1y\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/t7hyjty07h5ykg129do0tf9q1zzcgq1y\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/t7hyjty07h5ykg129do0tf9q1zzcgq1y\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/t7hyjty07h5ykg129do0tf9q1zzcgq1y?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/t7hyjty07h5ykg129do0tf9q1zzcgq1y?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'patient\',
          ),
        ),
      ),
      \'field_presenters_org\' => array(
        \'und\' => array(
          array(
            \'value\' => \'University of Michigan Health System\',
            \'format\' => NULL,
            \'safe_value\' => \'University of Michigan Health System\',
          ),
        ),
      ),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Medicare Annual Wellness Visit\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'fd6abd46-97b0-47f5-9cf7-a513a637b6b4\',
      \'vid\' => NULL,
      \'vuuid\' => \'dd0a9af5-09df-42fb-a7a7-7ba07734c12f\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'gfi1l2fl6x0ak60w8al0pjr7pu7t23ke\',
            \'format\' => NULL,
            \'safe_value\' => \'gfi1l2fl6x0ak60w8al0pjr7pu7t23ke\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/gfi1l2fl6x0ak60w8al0pjr7pu7t23ke\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/gfi1l2fl6x0ak60w8al0pjr7pu7t23ke\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/gfi1l2fl6x0ak60w8al0pjr7pu7t23ke?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/gfi1l2fl6x0ak60w8al0pjr7pu7t23ke?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Enterprise CRM: Full Lifecycle Collaboration in Action\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'ff31fea5-66ac-4a84-9e0a-f93a7b035703\',
      \'vid\' => NULL,
      \'vuuid\' => \'c62a0e94-d7bd-4fab-b97e-22051d188b78\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}\',
      \'field_box_key\' => array(
        \'und\' => array(
          array(
            \'value\' => \'s7ipuqdkxowzz6f9utxwyl0tomv2rbc1\',
            \'format\' => NULL,
            \'safe_value\' => \'s7ipuqdkxowzz6f9utxwyl0tomv2rbc1\',
          ),
        ),
      ),
      \'field_box_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://umich.box.com/s/s7ipuqdkxowzz6f9utxwyl0tomv2rbc1\',
            \'format\' => NULL,
            \'safe_value\' => \'https://umich.box.com/s/s7ipuqdkxowzz6f9utxwyl0tomv2rbc1\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'value\' => \'innovative-tech\',
          ),
        ),
      ),
      \'field_embed_code\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/s7ipuqdkxowzz6f9utxwyl0tomv2rbc1?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><iframe allowfullscreen=\\"\\" frameborder=\\"0\\" height=\\"300\\" msallowfullscreen=\\"\\" src=\\"https://app.box.com/embed/preview/s7ipuqdkxowzz6f9utxwyl0tomv2rbc1?view=&amp;sort=&amp;direction=ASC&amp;theme=light\\" webkitallowfullscreen=\\"\\" width=\\"330\\"></iframe></p>\\n",
          ),
        ),
      ),
      \'field_level_2_category\' => array(),
      \'field_presenters_org\' => array(),
      \'field_year\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'7\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'mrschlei\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'MERLOT: Multimedia Educational Resource for Learning and Online Teaching\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'poster_it_symposium\',
      \'uid\' => \'1\',
      \'uuid\' => \'ff81645c-730e-4b8b-aa4e-958125c96f78\',
      \'vid\' => NULL,
      \'vuuid\' => \'189dcba6-b87c-4705-9c76-41d2b81a3168\',
    ),
)',
);
  return $node_export;
}
