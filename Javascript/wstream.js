var fs = require("fs");
var data = 'Simply Easy Learning';
// Create a writable stream
var readerStream=fs.createReadStream('input.txt');

var writerStream = fs.createWriteStream('output.txt');
// Write the data to stream with encoding to be utf8
readerStream.pipe(writerStream);

console.log("Program Ended");
