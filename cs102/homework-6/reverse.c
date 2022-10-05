#include <stdio.h>
#include "functions.h"

int main (int argc,char** argv)
{
 if(argc>1)
 {
  for(int i=argc-1; i>0; i--)
  {
   reverse_string(argv[i]);
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

