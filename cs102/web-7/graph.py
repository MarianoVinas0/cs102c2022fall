#!/usr/bin/python
print("Content-type: text/html\n\n")
print("<html>")
print("<head>")
print("<title>Graph</title>")
print("</head>")
print("<body>")
print("<h1>Function Values</h1>")
A = 7
B = 5
C = 8
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
print("<table>")
print("<tr><th> f(x) </th><th> fprime(x) </th><th> fsum(x) </th><th> fdoubleprime(x) </th></tr>")
while(x<=200):
    fsum += fint(x)
    print("<tr><td> %d </td><td> %d </td><td> %d </td><td> %d </td><tr>" % (f(x), fprime(x), fsum, fdprime(x)))
    x += 1
print("</table>")
print("</body>")
print("</html>")
