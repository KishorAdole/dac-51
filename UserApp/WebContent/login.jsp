<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    
     <%
    String unm="";
    Cookie arr[]=request.getCookies();
  if(arr != null){
	  for(Cookie a:arr){
	  String cname=a.getName();
	  if(cname.equals("user_name")){
		  unm=a.getValue();
		  break;
	  }
  }
 }
  %>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/css/bootstrap.min.css" integrity="sha384-TX8t27EcRE3e/ihU7zmQxVncDAy5uIKz4rEkgIXeMed4M0jlfIDPvg6uqKI2xXr2" crossorigin="anonymous">
<title>Login</title>
</head>
<body>
<div class="container-fluid bg-dark bg-back">
<main class="d-flex align-items-center " style="height:100vh">
<div class="container" > 
      <div class="row">
          <div class="col-md-4 offset-md-4">
               <div class="card">
                   <div class="card-header bg-secondary text-light">
                     <h4 align="center">Login</h4>
                   </div>
                   <div class="card-body">
                         <form action="validate.jsp" method="post">
                              <div class="form-group">
                                 <label for="username">User Name</label>
                                    <input type="text" class="form-control" name="userName" >
    
                              </div>
                               <div class="form-group">
                                  <label for="Password">Password</label>
                                  <input type="password" class="form-control" name="userPass">
                               </div>
                              <div class="d-flex justify-content-center mt-2">
                           
                                    <button type="submit" class="btn btn-primary">Login</button>
                              </div>
                              <div class="d-flex justify-content-center mt-2">
                                   <a href="reg_form.jsp" >Register Here</a>
                              </div>
                             
					          <div  style="color: red;font-size: 15;text-align: center;" >
					             <%=(request.getParameter("error_msg")!=null)? request.getParameter("error_msg"):"" %>
		                      </div>
					

                         </form>
                   
                   </div>
              </div>
          
          </div>
      
      </div>
</div>


</main>

</div>
</body>
</html>