<?php
/**
 * @file views-view.tpl.php
 * Main view template
 */
?>
<div class="<?php print $classes; ?>">

  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($header): ?>
    <header>
      <?php print $header; ?>
    </header>
  <?php endif; ?>
  
  <?php if ($exposed): ?>
    <div class="view-filters">
      <?php print $exposed; ?>
    </div>
  <?php endif; ?>
  
  <?php if ($attachment_before): ?>
    <?php print $attachment_before; ?>
  <?php endif; ?>
  
  <?php if ($rows): ?>
    <?php print $rows; ?>
  <?php elseif ($empty): ?>
    <?php print $empty; ?>
  <?php endif; ?>
  
  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>
  
  <?php if ($attachment_after): ?>
  	<?php print $attachment_after; ?>
  <?php endif; ?>
  
  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>
  
  <?php if ($footer): ?>
    <?php print $footer; ?>
  <?php endif; ?>

</div>
