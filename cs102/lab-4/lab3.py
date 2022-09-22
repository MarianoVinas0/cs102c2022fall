import tkinter
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width=400, height = 600 )
c.pack()

x = -200
def f(y):
    y = 1+x*x
    return y
while(x<=200):
    c.create_rectangle(x, f(x), x+1, f(x)+1)
    x = x + 1
