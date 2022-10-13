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
i = 0
while(i<100):
	i=i+1
	print("<p> %s </p>" % (i))


print( """
</body>
</html>
""" )
