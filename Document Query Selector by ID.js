function handleMouseOver() {
    console.log("I have successfully called.");
  
    var id2Element = document.querySelector("#id2");
    id2Element.style.background = "pink";
    id2Element.style.color = "royalblue";
  
    id2Element.innerHTML = "Hello Id Selectors!!";
  }
  
  function handleMouseOut() {
    let id2Element = document.querySelector("#id2");
    id2Element.style.background = "black";
    id2Element.style.color = "white";
  
    id2Element.innerHTML = "Hello World";
  }

  function mouseout1(){
    let x=document.querySelector("#abc");
    x.style.background="red";
    x.innerHTML="12345";
  }

  function mouseover1(){
    let y=document.querySelector("#abc");
    //console.log("jai hind ");

    y.style,color="black";
    y.style.background="yellow";
    y.innerHTML="8888"

  }