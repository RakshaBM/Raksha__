var add = function(a){
    return function (b){
        console.log("in return")
        return a + b
    }
}

console.log("before var")
var add2two = add(2)
console.log("after var add")
console.log(add2two(2));