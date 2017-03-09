var buf1 = 22;
var buf2 = new Buffer("Hello");
//console.log(buf2.length);
//console.log(buf1.write('hello'));
console.log(Buffer.isBuffer(buf1));
console.log(Buffer.isBuffer(buf2));
console.log(__filename);
console.log(__dirname);
