// const recurse = (num) => {
//   if (num <= 0) {
//     return `The current number is ${num} and it is too low.`;
//   }

//   // console.log(`${num} is perfect.`);

//   let output = '';
//   for (let i = 0; i < num; i++) {
//     output += "#"

//     console.log(output);
//   }

//   return recurse(num - 1);
// }

// const generateHash = (num) => {
//   let output = '';

//   for (let i = 0; i < num; i++) {
//     output += "#";

//     console.log(output)
//   }
// }

class User2 {
  constructor(firstname, lastname, id, password) {
    this.firstname = firstname
    this.lastname = lastname
    this.id = id
    this.password = password
  }

  printName() {
    console.log(`${this.firstname} ${this.lastname}`);
  }

  printInfo() {
    console.log(`${this.firstname} has an ID of ${this.id} & PW is ${this.password}`);
  }
}

let paul = new User2("Paul", "Mulch", 2, "ndioand&51");

paul.printName();

// const User = function (firstname, lastname, id, password) {
//   this.firstname = firstname
//   this.lastname = lastname
//   this.id = id
//   this.password = password
// }

// User.prototype.printName = function () {
//   console.log(`${this.firstname} ${this.lastname}`);
// }

// let jake = new User("Jake", "Sullyvan", 1, "2511cuqkd");

// jake.printName();