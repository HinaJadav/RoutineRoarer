console.log("Hello JS");

// Keywords for declare the variables

// reserve memory for variables and we ablue to assign value to  variables which stored here

const account = 123; //--> used to declare constants

// Variable declarations
let accountEmail = "a@gmail.com";
var accountPassword = "12345";
accountCity = "JND"; // --> not use this method

// account = 321; // * in this variable declaration we use "canst" keyword which is not alllow variable value after it's initialized

accountEmail = "as@gmail.com";
acconrPassword = "243543";
accountCity = "ND";

// "let" and "var" keywords allowed reinitialization of variables

console.table([accountEmail, accountPassword, accountCity]);
// ┌─────────┬────────────────┐
// │ (index) │     Values     │
// ├─────────┼────────────────┤
// │    0    │ 'as@gmail.com' │
// │    1    │    '12345'     │
// │    2    │      'ND'      │
// └─────────┴────────────────┘

// "let" is more prefered than "var :
// bcz, "var" not follow block scope & functional scope

let accountState;
console.log(accountState); // op: undefine
