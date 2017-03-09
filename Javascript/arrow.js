const d = () => "hello";
console.log(d());

const name = 'Raksha';
console.log(`${name}'s laptop`);

const a = [1, 2, 3].map((x) => {
    const y = x + 1;
    return x * y;
});
console.log(a);
var t = a.reduce(() => {

    for(var numb of a){
        //console.log(num)
        numb = numb + 1;
    }
    return numb;
}, 2);
console.log(t);
