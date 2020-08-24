
function likehere(id){
    
let z=id.children[0].innerHTML;
let x=parseInt(z);
x++;
id.children[0].innerHTML=x;

}

function commenthere(){  
let usercomment=document.querySelector("#abc").value;
console.log(usercomment)
let newElement=document.querySelector("#node").cloneNode(true);
newElement.style.visibility = "visible";
newElement.children[0].innerHTML = usercomment;

let commentbox=document.querySelector("#sss");
commentbox.appendChild(newElement);
document.querySelector("#abc").value="";
}

function deletehere() {
    let x=document.querySelector("#node");
    x.remove();
  }