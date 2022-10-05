#include <stdio.h>
int string_length( char* string );

int main (int argc,char** argv)
{
if(argc>1)
{
for(int i=argc-1; i>0; i--)
{
fprintf (stdout, "%s %d ", argv[i], string_length(argv[i]));
}
fprintf (stdout, "\n");
}
else
{
fprintf (stdout, "no arguments found!\n");
}
return 0;
}

int string_length( char* string)
{
return 42;
}
