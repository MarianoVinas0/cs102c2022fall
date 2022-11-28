from tkinter import *
root = Tk()

class MyCanvas(Canvas):

    def __init__( this, *args, **kwargs ):
        Canvas.__init__( this, *args, **kwargs )
        this.ball = this.makeBall( 50, 50 )
        this.rect = this.makeRectangle( 225, 475 )
        this.bind("<KeyPress>", this.keyWasPressed )
        this.focus_set()
        this.ball_velocity_x = 3
        this.ball_velocity_y = 3
        
    def makeBall( this, x, y, color="blue" ):
        return this.create_oval( x, y, x+5, y+5, fill=color )

    def eachFrame( this ):
        sx, sy, ex, ey = this.coords(this.ball)
        sx2, sy2, ex2, ey2 = this.coords(this.rect)

        if (sx < 0 or sx > 500):
            this.ball_velocity_x = -this.ball_velocity_x
        if (sy < 0 or (abs(sy-sy2) < 10 and abs(sx-sx2) < 30)):
            this.ball_velocity_y = -this.ball_velocity_y
        if (sy > 500):
            raise(Exception("GAME OVER"))
            
        this.move( this.ball, this.ball_velocity_x, this.ball_velocity_y)


    def keyWasPressed( this, event=None ):
        key = event.keysym
        sx, sy, ex, ey = this.coords(this.rect)
        print( "just pressed:", key)
        if (key == "Left" and sx >= 0):
            this.move( this.rect, -25, 0)
        if (key == "Right" and ex <= 500):
            this.move( this.rect, 25, 0)
        sx, sy, ex, ey = this.coords(this.rect)

    def makeRectangle( this, x, y, color="red" ):
        return this.create_rectangle(x, y, x+50, y+10, fill=color)
        
canvas = MyCanvas( root, width=500, height=500 )
canvas.pack()

while( True ):
    canvas.eachFrame()
    root.update()



