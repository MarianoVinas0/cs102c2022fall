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
  int lines = 0;
  char scratch[1024];
  file = fopen(name,"r");
  fprintf (stdout,"print_file(%s)\n", name);
  if (file != NULL)
  {
    while (fgets(scratch, 1024, file) != NULL)
    {
      lines++;
    }
    fprintf(stdout, "%s %d lines \n", name, lines);
    fclose(file);
  }

  return 0;
}
