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
fprintf(stdout,"%5d",array[i][j]);
}
fprintf(stdout,"\n");
}
}

void add(int a[5][5],int b[5][5],int c[5][5])
{
for(int i=0; i<5; i++)
{
for(int j=0; j<5; j++)
{
c[i][j] = a[i][j] + b[i][j];
}
}
}
