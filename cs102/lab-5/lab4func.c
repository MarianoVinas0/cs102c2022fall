#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void fill(int array[10])
{
for(int i=0; i<10; i++)
{
array[i] = mrand48() % 50 + 50;
}
}

void print(int array[10])
{
for(int i=0; i<10; i++){
fprintf(stdout,"array[%d] = %d",i,array[i]);
fprintf(stdout,"\n");
}
}
