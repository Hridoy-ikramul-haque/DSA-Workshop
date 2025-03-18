
outer = () => {
     let count = 0;
     return inner = () => {
         count++;
         console.log("Count value: " + count);
         return deep_inner = () => {
             console.log(`Final count value: ${count}`);
         }
     };
 }
let inner_reciver = outer();
inner_reciver();
inner_reciver();
inner_reciver();
let deep_receiver = inner_reciver();
deep_receiver();