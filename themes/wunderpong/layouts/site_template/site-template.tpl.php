<?php if (!empty($content['topbar'])): ?>
  <div class="topbar clearfix">
    <?php print render($content['topbar']); ?>
  </div>
<?php endif; ?>

<div id="stripe">&nbsp;</div>
<div id="page">

  <?php if (!empty($content['header'])): ?>
    <header id="header" class="clearfix">
      <?php print render($content['header']); ?>
    </header>
  <?php endif; ?>
  
  <?php if (!empty($content['navigation'])): ?>
    <div id="navigation" class="clearfix">
      <?php print render($content['navigation']); ?>
    </div>
  <?php endif; ?>
  
  <?php if (!empty($content['content'])): ?>
    <div id="content" class="clearfix">
      <?php print render($content['content']); ?>
    </div>
  <?php endif; ?>

</div>

<?php if (!empty($content['footer'])): ?>
  <footer id="footer" class="clearfix">
    <?php print render($content['footer']); ?>
  </footer>
<?php endif; ?>
