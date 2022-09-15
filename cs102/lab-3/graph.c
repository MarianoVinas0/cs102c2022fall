/* Print multiples of 13, and more, and a sum of multiples */
#include <stdio.h>
int main( int argc, char **argv )
{
int A = 7;
int B = 5;
int C = 8;
int D = 4;

int x = -100;
int y = 0;
int h = D;
int yprime = 0;
int yint = 0;
int ysum = 0;
fprintf( stdout, "x,y,yprime,ysum\n");
while( x<= 100)
{
y = A*x*x*x - B*x*x + C*x;
yprime = (y - ( A*(x-h)*(x-h)*(x-h) - B*(x-h)*(x-h) + C*(x-h) ) )/h;
yint = (h * (y + ( A*(x-h)*(x-h)*(x-h) - B*(x-h)*(x-h) + C*(x-h) ) )/2);
ysum = ysum + yint;
fprintf( stdout, "%d, %d, %d, %d \n", x, y, yprime, ysum);
x = x + h;
}
return 0;
}
