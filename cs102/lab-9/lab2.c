#include <stdio.h>
int print_file(char* string);

int main (int argc, char** argv)
{
  print_file(argv[1]);
  return 0;
}

int print_file(char* name)
{
  FILE* file;
  char scratch[1024];
  file = fopen(name,"r");
  fprintf (stdout,"print_file(%s)\n", name);
  if (file != NULL)
  {
    if (fgets(scratch, 1024, file) != NULL)
    {
      fprintf(stdout, "%s", scratch);
    }
    fclose(file);
  }

  return 0;
}
