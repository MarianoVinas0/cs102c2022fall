#include <stdio.h>
int main (int argc,char** argv)
{
int array[10],i;
for (i=0; i<10; i=i+1)
{
array[i] = 5;
}
for (i=0; i<10; i++){
fprintf( stdout, "array[%d] = %d", i, array[i]);
fprintf( stdout, "\n" );
}
return 0;
}
