#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void fill8x12( int array[8][12] )
{
for(int i=0; i<8; i++)
{
for(int j=0; j<12; j++)
{
array[i][j] = mrand48() % 51 + 50;
}
}
}

void fill12x8( int array[12][8] )
{
for(int i=0; i<12; i++)
{
for(int j=0; j<8; j++)
{
array[i][j] = mrand48() % 51 + 50;
} 
}
}

void print8x12( int array[8][12] )
{
for(int i=0; i<8; i++)
{
for(int j=0; j<12; j++)
{
fprintf(stdout, "%5d", array[i][j]);
}
fprintf(stdout, "\n");
}
}

void print12x8( int array[12][8] )
{
for(int i=0; i<12; i++)
{
for(int j=0; j<8; j++)
{
fprintf(stdout, "%5d", array[i][j]);
}
fprintf(stdout, "\n");
}
}

void print12x12( int array[12][12] )
{
for(int i=0; i<12; i++)
{
for(int j=0; j<12; j++)
{
fprintf(stdout, "%8d", array[i][j]);
}
fprintf(stdout, "\n");
}
}

void cross(int array[8][12], int array2[12][8], int array3[12][12])
{
for(int i=0; i<12; i++)
{
for(int j=0; j<12; j++)
{
array3[i][j] = 0;
for(int k=0; k<8; k++)
{
array3[i][j] += array2[j][k] * array[k][i];
}
}
}
}
