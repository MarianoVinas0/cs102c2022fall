#include <stdio.h>
int main (int argc,char** argv)
{
if(argc>1)
{
for(int i=argc-1; i>0; i--)
{
fprintf (stdout, "%s ", argv[i]);
}
fprintf (stdout, "\n");
}
else
{
fprintf (stdout, "no arguments found!\n");
}
return 0;

}
