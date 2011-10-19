<?php
/**
 * @file
 * Displays the items of the accordion.
 *
 * @ingroup views_templates
 *
 * Note that the accordion NEEDS <?php print $row ?> to be wrapped by an
 * element, or it will hide all fields on all rows under the first field.
 *
 * Also, if you use field grouping and use the headers of the groups as the
 * accordion headers, these NEED to be inside h3 tags exactly as below
 * (though you can add classes).
 *
 * The current div wraping each row gets two css classes, which should be
 * enough for most cases:
 *     "views-accordion-item"
 *      and a unique per row class like item-0
 *
 */

$grid_class = 'grid-' . $grid_width;
$counter = 1;

?>

<?php foreach ($rows as $id => $row): ?>
<?php
    $class_alpha_omega = '';

    $alpha_positions[] = ($counter * $total_columns / $grid_width) + 1;
    $omega_positions[] = ($counter * $total_columns / $grid_width);

    if ($counter == 1 || in_array($counter, $alpha_positions)) {
        $class_alpha_omega .= ' alpha';
    }
    if (in_array($counter, $omega_positions)) {
        $class_alpha_omega .= ' omega';
    }
    $counter++;
?>

<div class="<?php print $classes_array[$id]; ?>">
    <div class="<?php print $grid_class . $class_alpha_omega; ?>">
        <?php print $row; ?>
    </div>
</div>

<?php endforeach; ?>