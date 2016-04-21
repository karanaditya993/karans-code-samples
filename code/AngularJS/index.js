var express = require('express');
var app = express();
var port = 5000;

app.use(express.static(__dirname + '/'));

app.get("/", function(req, res) {
  res.sendFile(__dirname + '/todoAngular.html');
})

app.listen(port, function(){
  console.log("Running on port " + port);
})
