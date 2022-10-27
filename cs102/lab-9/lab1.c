#include <stdio.h>
#include "lab1.h"

int main (int argc, char** argv)
{
  for(int i=1; i<argc; i++)
  {
    my_function(argv[i]);
  }
  return 0;
}

int my_function(char* string)
{
  fprintf (stdout,"my_function(%s)\n", string);
  return 0;
}
