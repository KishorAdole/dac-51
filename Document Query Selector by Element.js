function handleMouseOver() {
    var id2Element = document.querySelector("div").children[0];
    id2Element.style.background = "gold";
    id2Element.style.color = "black";
  
    id2Element.innerHTML = "Hello Element Selector!!";
  }
  
  function handleMouseOut() {
    let id2Element = document.querySelector("div").children[0];
    id2Element.style.background = "black";
    id2Element.style.color = "white";
  
    id2Element.innerHTML = "Hello World";
  }

  function mouseover(){
    let x=document.querySelector("div").children[1];
    x.style.background="yellow";

  }

  function mouseout(){
    let y=document.querySelector("div").children[1];
    y.style.background="black";
  }