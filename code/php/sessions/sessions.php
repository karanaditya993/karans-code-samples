<?php
// superglobal php variable $_SESSION
    session_start();

    if (isset($_SESSION["counter"])) {
      $counter = $_SESSION["counter"];

    }
    else {
      $counter = 0;
    }

    $_SESSION["counter"] = $counter + 1;
?>

<!DOCTYPE html>
<html>
  <head>
    <title>Sessions</title>
  </head>
  <body>
    You have visited this site <?= $counters ?> time(s).
  </body>
</html>
