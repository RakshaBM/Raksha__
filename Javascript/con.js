console.info("Program Started");

function count(){
var counter = 10;
console.log("Counter: %d", counter);
}
console.time("Getting data");
setTimeout(count,2000);
var a=2+3;
console.log(a);

console.timeEnd('Getting data');
console.info("Program Ended")
