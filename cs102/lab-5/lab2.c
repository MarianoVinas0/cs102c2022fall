#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main (int argc,char** argv)
{
int array[10],i;
for (i=0; i<10; i=i+1)
{
array[i] = mrand48() % 50 + 50;
}
for (i=0; i<10; i++){
fprintf( stdout, "array[%d] = %d", i, array[i]);
fprintf( stdout, "\n" );
}
return 0;
}
