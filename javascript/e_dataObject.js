//setInterval

function myAlert() {
    alert("HI");
}

setInterval(myAlert, 3000);
//This will call the myAlert function every 3 seconds (1000 ms = 1 second).
//Write the name of the function without parentheses when passing it into the setInterval method.


//Date Object
var d = new Date();
//d stores the current date and time

//initialize dates
new Date(millisecond)
new Date(dateString)
new Date(year, month, day, hours, minutes, seconds, milliseconds)

//Fri Jan 02 1970 00:00:00
var d1 = new Date(86400000); 

//Fri Jan 02 2015 10:42:00
var d2 = new Date("January 2, 2015 10:42:00");

//Sat Jun 11 1988 11:42:00
var d3 = new Date(88,5,11,11,42,0,0);

//JavaScript counts months from 0 to 11. January is 0, and December is 11.
//Date objects are static, rather than dynamic. The computer time is ticking, but date objects don't change, once created.

function getTime(){
    var date = new Date();
    var d = date.getDays();
    var h = date.getHours();
    var m = date.getMinutes();
}