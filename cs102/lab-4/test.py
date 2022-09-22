def f( x ):
    y = x - 1
    z = y / 2
    x = x + z
    return x
def g( p,q ):
    return f( p ) + f( q );
a = f( 5 )
b = g(a, 9)

print(a)
print(b)
