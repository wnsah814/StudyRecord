// dom = Document Object Model
// document is root of DOM


// Selecting Elements
//document.getElementById(id)
//document.getElementsByClassName(name)
//decument.getElementsByTagName(name)

/*
var arr = document.getElementsByClassName("class");
//accessing 2nd
arr[1].innerHTML = "2nd";
*/


//element.childNodes returns an array of an element's child nodes.
//element.firstChild returns the first child node of an element.
//element.lastChild returns the last child node of an element.
//element.hasChildNodes returns true if an element has any child nodes, otherwise false.
//element.nextSibling returns the next node at the same tree level.
//element.previousSibling returns the previous node at the same tree level.
//element.parentNode returns the parent node of an element.


//Changing Attributes
//var a = document.getElementById(" ")

//a.innerHTML, src, href ...

// - Style
//a.style.color = "";
//All CSS properties can be set and modified using JavaScript. Just remember, that you cannot use dashes (-) in the property names: these are replaced with camelCase versions, where the compound words begin with a capital letter.
//For example: the background-color property should be referred to as backgroundColor.




//Creating Elements
//element.cloneNode() clones an element and returns the resulting node.
//document.createElement(element) creates a new element node.
//document.createTextNode(text) creates a new text node.

/* Example

<div id="demo"> some content</div>

<script> 
    //creating a new paragraph
    var p = document.createElement("p");
    var node = document.createTextNode("Some text");
    //adding the text to paragraph
    p.appendChild(node);

    var div = document.getElementById("demo");
    //adding paragraph to the div
    div.appendChild(p);
</script>

*/


//Removing Elements
//To remove an HTML element, you must select the parent of the element and use the removeChild(node) method.

/* Example

<div id="demo">
    <p id="p1">This is a paragraph</p>
    <p id="p2">This is another paragraph</p>
</div>

<script>
var parent = document.getElementById("demo");
var child = document.getElementById("p1");
parent.removeChild(child);
</script>

*/

// An alternative way of achieving the same result would be the use of the parentNode property to get the parent of the element we want to remove:

/*
var child = document.getElementById("p1");
child.parentNode.removeChild(child); 
*/

// Replacing Elements
//To replace an HTML element, the element.replaceChild(newNode, oldNode) method is used.

/*
<div id="demo">
    <p id="p1">This is a paragraph.</p>
    <p id="p2">This is another paragraph.</p>
</div>

<script>
var p = document.createElement("p");
var node = document.createTextNode("This is new");
p.appendChild(node);

var parent = document.getElementById("demo");
var child = document.getElementById("p1");
parent.replaceChild(p, child);
</script>
*/