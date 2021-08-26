// Use the following syntax to create an object method:
//methodName = function() { /*lines*/ }

// Access an object method using the following syntax:
//objectName.methodName()

// A method is a function, belonging to an object. It can be referenced using the this keyword.
// The this keyword is used as a reference to the current object, meaning that you can access the objects properties and methods using it.

// Defining methods is done inside the constructor function.

//Ex1)

function person(name, age){
    this.name = name;
    this.age = age;
    this.changeName = function(name) {
        this.name = name;
    }
}

var p1 = new person("David", 21);
p1.changeName("Jhon");

//this : the current object




function person2(name, age){
    this.name = name;
    this.age = age;
    this.yearOfBirth = bornYear;
}

function bornYear(){
    return 2016 - this.age;
}

//Call the method ad ussal
var p2 = new person2("A", 22);
document.write(p2.yearOfBirth());