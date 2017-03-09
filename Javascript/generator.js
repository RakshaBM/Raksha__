/**
 * Created by rakshabm on 31/1/17.
 */
function* graph() {
    let x = 0;
    let y = 0;
    while(true){
        yield{x:x, y:y}
        x += 2;
        y += 1;
    }
}
let y = graph();
console.log(y.next().value);
console.log(y.next().value);
console.log(y.next().value);
console.log(y.next().value);
console.log("lets try this");
console.log(y.next().value);
console.log(y.next().value);