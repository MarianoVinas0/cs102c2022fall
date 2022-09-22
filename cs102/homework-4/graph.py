import tkinter
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width=400, height = 600 )
c.pack()

c.create_line(0,300,400,300)
c.create_line(200,0,200,600)

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
def fdoubleprime(x):
    y = (fprime(x)-fprime(x-h))/h
    return y
ysum = 0

while(x<=200):
    ysum += fint(x)
    s1 = -1/100000
    s2 = -1/3000
    s3 = -1/60000000
    s4 = -1/25
    
    c.create_rectangle(x+200, s1*f(x)+300, x+201, s1*f(x)+301, outline="blue")
    c.create_rectangle(x+200, s2*fprime(x)+300, x+201, s2*fprime(x)+301, outline="purple")
    c.create_rectangle(x+200, s3*ysum+300, x+201, s3*ysum+301, outline="red")
    c.create_rectangle(x+200, s4*fdoubleprime(x)+300, x+201, s4*fdoubleprime(x)+301, outline="green")
    x += 1

tk.mainloop()
