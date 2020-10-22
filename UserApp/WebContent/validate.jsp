<%@page import="com.service.UserServiceImple"%>
<%@page import="com.service.UserService"%>
<jsp:useBean id="user" class="com.dto.User" scope="session" ></jsp:useBean>
<jsp:setProperty property="*" name="user"/>

session.setAttribute("cur_u_id", user.getUserName());
<%
	UserService userService = new UserServiceImple();
	boolean b = userService.Login(user);
	if(b){
		
		response.sendRedirect("home.jsp");
	}else{
		Cookie cookie=new Cookie("user_name",user.getUserName());
		   cookie.setMaxAge(60*60*36);
		  response.addCookie(cookie);
		response.sendRedirect("login.jsp");
	}
%>