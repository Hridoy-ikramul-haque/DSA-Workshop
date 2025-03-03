//Inputs
let a, b, operator;
a = Number(prompt("Enter 1st number: "));
b = Number(prompt("Enter 2nd number: "));
operator = prompt("Enter any given operator(\' +,-,*,/ \')");

//validates
if (isNaN(a) || isNaN(b))
    console.log("Please provides valid numbers");
else
{
    let outcomes; 
    switch (operator)
    {
        case "+":
            outcomes = a + b;
            break;
        case "-":
            outcomes = a - b;
            break;
        case "*":
            outcomes = a * b;
            break;
        case "/":
            if (b === 0)
                console.log("Can't take 0 as a 2nd number, use another nunber");
            else
            {
                outcomes = a / b;
            }
            break;
        default:
            outcomes = undefined;
            console.log("Invalid");
    }
    if (outcomes != undefined)
        console.log(`${a} ${operator} ${b} = ${outcomes}`);

    let result = document.getElementById('result');
    result.innerHTML = `${a} ${operator} ${b} = ${outcomes}`;
}

