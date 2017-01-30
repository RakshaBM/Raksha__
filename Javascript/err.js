 x=22;
    
try { 
        if(x == "") throw "empty";
        if(isNaN(x)) throw "not a number";
       var x; 
	x = Number(x);
        if(x < 5) throw "too low";
        if(x > 10) throw "too high";
    }

catch(err) {
    console.log("Input is "+err);
}
