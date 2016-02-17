<!--  Rerender page if one item in form is blank-->
<?php
  if (empty($_POST["name"]) || empty($_POST["dorm"]) || empty($_POST["gender"])) {
    header("Location: http://ide50-karanaditya993.cs50.io/froshims.php");
    exit;
  }
?>

<!DOCTYPE html>
<html>
  <head>

    <title>Frosh IMs</title>
  </head>
  <body>
    <pre>
      <?php print_r($_POST); ?>
    </pre>
  </body>
</html>
