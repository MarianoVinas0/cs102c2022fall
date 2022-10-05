#include <stdio.h>
int main (int argc,char** argv)
{
if(argc>1)
{
for(int i=1; i<argc; i++)
{
fprintf (stdout, "%s ", argv[i]);
}
fprintf (stdout, "\n");
}
else
{
fprintf (stdout, "no arguments found! \n");
}
return 0;

}
