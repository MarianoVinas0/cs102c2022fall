import tkinter
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width=400, height = 600 )
c.pack()

c.create_line(0,300,400,300)
c.create_line(200,0,200,600)

x = -200
def f(x):
    y = 1+x*x
    return y

while(x<=200):
    y = -f(x)/67
    c.create_rectangle(x+200, y+300, x+201, y+301)
    x += 1

tk.mainloop()
