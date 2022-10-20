#!/usr/bin/python
import cgi
import cgitb
cgitb.enable()

print("Content-type: text/html\n\n")
print("<html>")
print("<head>")
print("<title>Graph</title>")
print("<h1>Homework 8 | Mariano Vinas | CS102C</h1>")

print( """
<script src="chart.js" type="text/javascript"></script>
<link rel="stylesheet" href="chart.css" type="text/css" />
</head><body>
<h1 onClick= 'toggle()'>Click here</h1>

""")

form = cgi.FieldStorage()
if "A" and "B" and "C" in form:
    A = int(form["A"].value)
    B = int(form["B"].value)
    C = int(form["C"].value)
else:
    print("numbers not entered")

D = 4
h = D

x = -200
def f(x):
    y = A*x*x*x - B*x*x + C*x
    return y

def fprime(x):
    y = (f(x)-f(x-h))/h
    return y
def fint(x):
    y = (f(x)+f(x-h))/2*h
    return y
def fdprime(x):
    y = (fprime(x)-fprime(x-h))/h
    return y
fsum = 0
print("<table class='visible' id='testme'>")
print("<tr><th> x </th> <th> f(x) </th> <th> fprime(x) </th> <th> fsum(x) </th> </tr>")

while(x<=200):
    fsum += fint(x)
    if x % 2 == 0:
       color = 'a'
    else:
       color = 'b'
    print("<tr class=%s><td> %12d </td> <td> %12d </td> <td> %12d </td> <td> %12d </td> <tr>" % (color, x, f(x), fprime(x), fsum))
    x += 1
print("</table>")
print("</body>")
print("</html>")

