var course1 = "HTML";
var course2 = "CSS";
var course3 = "JS";
//=>
var courses = new Array("HTML", "CSS", "JS");

var course = courses[0]; //HTML
courses[1] = "C++" //Change CSS to C++

document.write[10]; //undefined

//Creating v2
var courses2 = new Array(3);
courses2[0] = "HTML";
courses2[1] = "CSS";
courses2[2] = "JS";

//v3
var courses3 = new Array();
courses3[0] = "HTML";
courses3[1] = "CSS";
courses3[2] = "JS";
courses3[3] = "C++";

//v4
var courses4 = ["HTML", "CSS", "JS"];

// get length
console.log(courses.length);


//combining array : concat()
var c1 = ["HTML", "JS"];
var c2 = ["JS", "c++"];
var courses_combined = c1.concat(c2);

