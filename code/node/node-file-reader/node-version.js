// Need to require standard library of node
// can be seen at nodejs.org/api
var fs = require('fs')

// fs = FileSystem
// readFile is a built in function for File System module

// console.log(fs.readFile('names.txt'))
// This won't work because we need a callback
// function

fs.readFile('names.txt', 'utf8', function(err, fileContents){
  if (err) throw err;
  // console.log(fileContents);
  var contents = fileContents.split(/\r?\n/).forEach(function(line) {
    // if (err) throw err;
    var uppercase = line.toUpperCase();
    console.log(uppercase);
  })
})
