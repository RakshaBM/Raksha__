function tag(strings, ...values){
    if(values[0] <20){
        values[1]="awake";
    }
    return `${strings[0]}${values[0]}${strings[1]}${values[1]}`
}

var message=tag`It's ${new Date().getHours()} I'm ${""}`;

console.log(message);