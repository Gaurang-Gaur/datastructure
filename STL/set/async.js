async function gaurang(){

    setTimeout(function(){
        console.log ("onloading this async function in js");

    },1000)

    let p1= new Promise ((resolve, reject)=>{
        console.log("Inside the  promise p1");

        resolve(54);
    })
    let p2=new Promise((resolve, reject)=>{
        console.log("Inside the promise p2");

        reject (new Error("I am error in promise p2"));
    })

    let a = await p1;
    let b= await p2;
    // p2.catch(e=>{console.log(e)});
    

console.log(a);
console.log(b);

}
gaurang();