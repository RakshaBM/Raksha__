var data = [
    { amount: 100, date: '1-12-17' },
    { amount: 200, date: '1-13-17' },
    { amount: 300, date: '1-13-17' },
    { amount: 400, date: '1-12-17' }
]

const convertDateToUnix = (transaction)=> ({
    ...transaction,
    date: +new Date (transaction.date)
})/**
 * Created by rakshabm on 1/2/17.
 */
console.log(data.map(convertDateToUnix));