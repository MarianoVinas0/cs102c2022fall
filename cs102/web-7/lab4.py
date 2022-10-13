#!/usr/bin/python
print( "Content-type: text/html\n\n" )
print( """
<html>
<head>
<title>LAB 7</title>
</head>
<body>
""" )
print("<h1>Hello, world!</h1>")
print("<table>")
i = 0
while(i<100):
	i=i+1
	print("<tr><td> %s </td> <td> %s </td></tr>" % (i, 100*i))

print("</table>")
print( """
</body>
</html>
""" )
