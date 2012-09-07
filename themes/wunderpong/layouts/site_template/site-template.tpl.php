<?php if (!empty($content['header'])): ?>
  <header id="header">
    <div class="wrap"><?php print render($content['header']); ?></div>
  </header>
<?php endif; ?>

<?php if (!empty($content['content'])): ?>
  <div id="content">
    <div class="wrap"><?php print render($content['content']); ?></div>
  </div>
<?php endif; ?>

<?php if (!empty($content['footer'])): ?>
  <footer id="footer">
    <div class="wrap"><?php print render($content['footer']); ?></div>
  </footer>
<?php endif; ?>
