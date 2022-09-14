/* Print multiples of 13, and more, and a sum of multiples */
#include <stdio.h>
int main( int argc, char **argv )
{
int x = 0;
int y = 0;
int h = 2;
int yprime = 0;
fprintf( stdout, "x,y,yprime\n");
while( x<= 200)
{
y = 1 + x*x;
yprime = (1 + x*x - (1 + (x-h)*(x-h)))/h;
fprintf( stdout, "%d,%d,%d\n", x, y, yprime);
x = x + 1;
}
return 0;
}
