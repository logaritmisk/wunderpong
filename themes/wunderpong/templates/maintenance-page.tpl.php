<!DOCTYPE html>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>">
<head>
<?php print $head; ?>
<title><?php print $head_title; ?></title>
<style type="text/css">
  html {
    background: #fff;
    margin: 20px;
  }
  body {
    color: #333;
    font-family: sans-serif;
    margin: 0 auto;
  }
</style>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
<h1><?php print $site_name; ?></h1>
<?php if ($title): ?>
  <h2><?php print $title; ?></h2>
<?php endif; ?>
<?php print $messages; ?>
<?php print $content; ?>
</body>
</html>
