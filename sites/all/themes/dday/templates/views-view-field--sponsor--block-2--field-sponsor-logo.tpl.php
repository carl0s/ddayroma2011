<?php
    if ($row->_field_data['nid']['entity']->field_sponsor_fake_real['und'][0]['value'] == 'fake') {
        print '<a href="/diventa-sponsor"><img typeof="foaf:Image" src="' . base_path() . 'sites/all/themes/dday/images/gold.png" alt="" /></a>';
    } else {
      print $output;
    }
?>