/**
 * Created by rakshabm on 31/1/17.
 */
var newMap = new Map();
// set
// get
// clear
// has
//.keys .values .entries
newMap.set('foo', 'bar');
newMap.set('foo1', 'bar1');
console.log(newMap.size);
for(var [key, value] of newMap.entries()){
    console.log(key + " = " + value);
}
