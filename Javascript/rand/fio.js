var fs=require("fs");
fs.open('inpu.txt','r+',function(err,fd){
if(err){
return console.error(err);
}
console.log("success");
});

