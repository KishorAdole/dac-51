<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
     <%@ page errorPage="erroe_page.jsp" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/css/bootstrap.min.css" integrity="sha384-TX8t27EcRE3e/ihU7zmQxVncDAy5uIKz4rEkgIXeMed4M0jlfIDPvg6uqKI2xXr2" crossorigin="anonymous">
<title>register Here</title>
</head>
<body>

<div class="container-fluid bg-dark bg-back">
<main class="d-flex align-items-center " style="height:100vh">
<div class="container" > 
      <div class="row">
          <div class="col-md-4 offset-md-4">
               <div class="card">
                   <div class="card-header bg-secondary text-light">
                     <h4 align="center">Registration Page</h4>
                   </div>
     <div class="card-body">
	<form action="reg.jsp" method="post" >
		<table align="center" >
		
			    <tr>
					<td>fullName</td>
					<td><input type="text" name="fullName"  /> </td>
				</tr>
				<tr>
					<td>User Name</td>
					<td><input type="text" name="userName"  /> </td>
				</tr>
				<tr>
					<td>Password</td>
					<td><input type="password" name="userPass"  /> </td>
				</tr>
				<tr>
					<td><a href="login.jsp" >Back</a> </td>
					<td><input type="submit" value="Register"  /> </td>
				</tr>
			</tbody>
		</table>
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