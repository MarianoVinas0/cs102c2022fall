#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

#include "functions.h"

int main (int argc,char** argv)
{
fprintf(stdout, "Content-type: text/html\n\n");
fprintf(stdout, "<html>\n");
fprintf(stdout, "<head>\n");
fprintf(stdout, "<title>Graph</title>\n");
fprintf(stdout, "</head>\n");
fprintf(stdout, "<body>\n");
fprintf(stdout, "<h1>Function Values</h1>\n");

int array[8][12];
int array2[12][8];
int array3[12][12];
srand48(getpid());
fill8x12(array);
fill12x8(array2);
cross(array,array2,array3);
print8x12(array);
print12x8(array2);
print12x12(array3);
fprintf(stdout, "</body>\n");
fprintf(stdout, "</html>\n");
return 0;
}

