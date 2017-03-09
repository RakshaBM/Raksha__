/**
 * Created by rakshabm on 1/2/17.
 */
var data = [
    { amount: 100, date: '1-12-17' },
    { amount: 200, date: '1-13-17' },
    { amount: 300, date: '1-13-17' },
    { amount: 400, date: '1-12-17' }
]
/*
var filtered = acc.filter((acc) => acc.date === '13-1-17');
console.log(filtered);*/

 const matchWithDate = (date) => (item) => item.date === date ;

 const matchwith13 = matchWithDate('13-1-17')

 var data_final = data.filter(matchwith13)



var res = data.map((dat) => {
    date : (+new Date(dat.date));
    amount : dat.amount;}
);
 console.log(res);

const convertDateToUnix = (transaction)=>{
    let newDate = +new Date (transaction.date)

    return {
        amount: transaction.amount,
        date: newDate
    }
}

console.log(data.map(convertDateToUnix));
var obj1= {
    name: 'vinoj',
    age: 25
}
var obj2 = {
    ...obj1,
    age: 24
}
console.log(obj2);
