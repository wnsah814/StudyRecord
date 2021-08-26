//object
var myObject = {
    name = "junmo", age = 20,
    height = 177.2
}

console.log(myObject['name']); //"junmo"
console.log(myObject.name); //"junmo"


//object construct
function person(name, age, color){
    this.name = name;
    this.age = age;
    this.favColor = color;
}

//The this keyword refers to the current object.
//Note that this is not a variable. It is a keyword, and its value cannot be changed.

//Creating Objects
var p1 = new person("Jhon", 20, "white");
var p2 = new person("Amy", 21, "red");

document.write(p1.age); //20
console.log(p2.favColor); //"red"