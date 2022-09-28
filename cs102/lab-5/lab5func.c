#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void fill(int array[5][5])
{
for(int i=0; i<5; i++)
{
for(int j=0; j<5; j++)
{
array[i][j] = mrand48() % 51 + 50;
}
}
}

void print(int array[5][5])
{
for(int i=0; i<5; i++)
{
for(int j=0; j<5; j++)
{
fprintf(stdout,"array[%d][%d] = %5d",i,j,array[i][j]);
fprintf(stdout,"\n");
}
}
}
