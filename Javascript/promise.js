const d = new Promise((resolve, reject) => {
    setTimeout(() => {
        throw new Error('error thrown');
        if (true) {
            resolve('hello world');
        } else {
            reject('no ');
        }
    }, 2000);
});
d.then((data) => {
    console.log('success: ', data);

    return 'foo bar';
}).
then((data) => console.log('success 2 :', data)).
catch((error) => console.error('error : ', error));