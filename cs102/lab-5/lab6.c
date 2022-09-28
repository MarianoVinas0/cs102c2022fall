#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

#include "lab6func.h"

int main (int argc,char** argv)
{
int array[5][5];
int array2[5][5];
int array3[5][5];
srand48(getpid());
fill(array);
fill(array2);
add(array,array2,array3);
print(array);
print(array2);
print(array3);
return 0;
}
