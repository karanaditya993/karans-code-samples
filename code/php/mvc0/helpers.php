<?php
  /**
  * Renders footer
  */
  function renderFooter($data = []) {
    // built in php function that takes key value pair and makes it into a local
    // variable with name equal to key and value equal to value
    extract($data);
    require("footer.php");
  }

  /**
  * Renders header
  */
  function renderHeader($data = []) {
    extract($data);
    require("header.php");
  }

 ?>
