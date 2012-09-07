<?php
/**
 * @file panels-pane.tpl.php
 * Main panel pane template
 */
?>
<section class="<?php print $classes; ?>" <?php print $id; ?>>
  <?php if ($admin_links): ?>
    <?php print $admin_links; ?>
  <?php endif; ?>

  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h2><?php print $title; ?></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($feeds): ?>
    <?php print $feeds; ?>
  <?php endif; ?>

  <?php print render($content); ?>

  <?php if ($links): ?>
    <?php print $links; ?>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>
</section>
