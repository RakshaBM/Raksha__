/**
 * Created by rakshabm on 31/1/17.
 */
const filtered = [1, 5, 8, 130, 44].filter((value) => value <= 10 );
console.log(filtered);

const inc = filtered.map((a) => a+10 );
console.log(inc);

const sum = inc.reduce((a, b) => a + b, 0);
console.log(sum);
/*var nums = [1, 2,3,4,5]

var res = num.map(item => item+2)*/

console.log(new Date());

//----------------------------------------------------------------------------------------------------------------
var data = [
    { amount: 100, date: '1-12-17' },
    { amount: 200, date: '1-13-17' },
    { amount: 300, date: '1-14-17' },
    { amount: 400, date: '1-12-17' }
]
var d= []
var res = data.reduce((a, b) => {
    if( a !== b ){
        d += b.date;
        return d;
    }
});
console.log(res);