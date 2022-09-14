/* Print multiples of 13, and more, and a sum of multiples */
#include <stdio.h>
int main( int argc, char **argv )
{
int x = 0;
int yprime = 1 + (x*x);
int multiple = 0;
int more = 0;
int sum = 0;
fprintf( stdout, "multiple,more,sum\n");
while( x<= 200)
{
multiple = x * 13;
more = multiple + 5;
sum = sum + multiple;
fprintf( stdout, "%d,%d,%d\n", multiple, more, sum);
x = x + 1;
}
return 0;
}
