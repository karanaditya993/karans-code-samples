var mongoose = require('mongoose');

mongoose.connect('mongodb://localhost/todoApp');

var db = mongoose.connection;

module.exports = mongoose;
