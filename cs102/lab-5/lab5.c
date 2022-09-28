#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

#include "lab5func.h"

int main (int argc,char** argv)
{
int array[5][5],i;
int array2[5][5],j;
srand48(getpid());
fill(array);
fill(array2);
print(array);
print(array2);
return 0;
}
