from tkinter import *
from intersect import intersect, between, edges, intersectAny, hits
root = Tk()

class MyCanvas(Canvas):

    def mouseHasMoved( this, event ):
        sx, sy, ex, ey = this.coords(this.rect)
        this.move( this.rect, event.x - (sx+ex)/2, 0)        

    def __init__( this, *args, **kwargs ):
        Canvas.__init__( this, *args, **kwargs )
        this.ball = this.makeBall( 50, 50 )
        this.rect = this.makeRectangle( 225, 475 )
        this.bind("<KeyPress>", this.keyWasPressed )
        this.focus_set()
        this.ball_velocity_x = 3
        this.ball_velocity_y = 3
        this.bind( "<Motion>", this.mouseHasMoved )
        this.makeBlock(225, 175)
        this.makeBlock(125, 275)
        this.makeBlock(325, 275)

        
    def makeBall( this, x, y, color="blue" ):
        return this.create_oval( x, y, x+5, y+5, fill=color )

    def eachFrame( this ):
        sx, sy, ex, ey = this.coords(this.ball)
        sx2, sy2, ex2, ey2 = this.coords(this.rect)
        allblocks = this.find_withtag("block")    

        if (sx < 0 or sx > 500):
            this.ball_velocity_x = -this.ball_velocity_x
        if (sy < 0):
            this.ball_velocity_y = -this.ball_velocity_y
        if (sy > 500):
            raise(Exception("GAME OVER"))
        if 'N' in hits( *this.coords(this.rect), *this.coords(this.ball) ) :
                this.ball_velocity_y = -abs(this.ball_velocity_y)

        for block in allblocks:
            sx3, sy3, ex3, ey3 = this.coords(block)
            if 'N' in hits( *this.coords(block), *this.coords(this.ball) ) :
                this.ball_velocity_y = -abs(this.ball_velocity_y)
                
            if 'S' in hits( *this.coords(block), *this.coords(this.ball) ) :
                this.ball_velocity_y = abs(this.ball_velocity_y)

            if 'E' in hits( *this.coords(block), *this.coords(this.ball) ) :
                this.ball_velocity_x = abs(this.ball_velocity_x)    

            if 'W' in hits( *this.coords(block), *this.coords(this.ball) ) :
                this.ball_velocity_x = -abs(this.ball_velocity_x)

            if (not len(hits( *this.coords(block), *this.coords(this.ball))) == 0):
                this.delete(block)

        if (len(allblocks) == 0):
            raise(Exception("You win!"))

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

    def makeBlock( this, x, y, color="red"):
        return this.create_rectangle(x, y, x+30, y+30, fill=color, tags="block")    
        
canvas = MyCanvas( root, width=500, height=500 )
canvas.pack()

while( True ):
    canvas.eachFrame()
    root.update()

