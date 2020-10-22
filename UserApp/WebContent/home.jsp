<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    <%@ include file="cache_control.jsp" %>
 
    <jsp:useBean id="user" class="com.dto.User" scope="session" ></jsp:useBean>
<% 
	if(user !=null && user.getUserId()>0){
%>
  
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>home</title>
</head>
<body style="background-color:black">
                 <%
		          String nm=user.getFullName();
		         %>
		         <div>
		            <h1 style="font-size:50px;color:white">Welcome <%=nm%></h1>
				    <h5 style="font-size:50px;color:white" ><a href="logout.jsp" >logout</a></h5>
			    </div>  
	            
			
</body>
</html>
<% }else{
	response.sendRedirect("login.jsp");	
	}
	%>
