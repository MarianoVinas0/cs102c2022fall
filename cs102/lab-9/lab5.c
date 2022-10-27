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
  int bytes = 0;
  char scratch[1024];
  file = fopen(name,"r");
  fprintf (stdout,"print_file(%s)\n", name);
  if (file != NULL)
  {
    while (fgets(scratch, 1024, file) != NULL)
    {
      for (int i = 0; scratch[i] != '\0'; i++)
      {
        bytes++;
      }
      lines++;
    }
    fprintf(stdout, "%s %d lines %d bytes \n", name, lines, bytes);
    fclose(file);
  }

  return 0;
}
