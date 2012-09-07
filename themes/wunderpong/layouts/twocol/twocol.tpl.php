<?php if (!empty($content['main'])): ?>
  <section id="main">
    <?php print render($content['main']); ?>
  </section>
<?php endif; ?>

<?php if (!empty($content['aside'])): ?>
  <aside id="aside">
    <?php print render($content['aside']); ?>
  </aside>
<?php endif; ?>
