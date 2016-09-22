document.addEventListener("DOMContentLoaded", function() {


document.getElementById("text").addEventListener("mouseover", mouseOver);
document.getElementById("text").addEventListener("mouseout", mouseOut);

function mouseOver() {
    document.getElementById("text").style.color = "red";
}

function mouseOut() {
    document.getElementById("text").style.color = "black";
}


window.onclick = myFunction;

function myFunction() {
    document.getElementsByTagName("BODY")[0].style.backgroundColor = "red";
}

// document.getElementsByClassName("parent").

function mouseClick() {
    document.getElementById("son").effect( "shake" );
}

});










 



	// console.log("Hey, I'm using JS!");
	// var div1 = document.getElementById("div1");

	// div1.style.backgroundColor = "blue";
	// var div2 = document.getElementById("div2");

	// div2.style.backgroundColor = "yellow";

	// var div3 = document.getElementById("div3");
	// div3.style.backgroundColor = "#113355";

	// var p = document.getElementsByClassName("parent");
	// p[0].style.backgroundColor = "gray";

	// var degree = 0;
  // parameter understand 
	// var rotateDiv = function (d) {
	// 	degree = degree + 0.1;
	// 	p[0].style.transform = "rotate("+ degree +"deg)";
	// };

	// window.setInterval(rotateDiv, 10);
 

 