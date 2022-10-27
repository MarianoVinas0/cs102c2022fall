#include <stdio.h>
int print_file(char* string);
int string_length(char* string);
int word_count(char* string);

int main (int argc, char** argv)
{
  for(int i=1; i<argc; i++)
  {
    print_file(argv[i]);
  }
  return 0;
}

int print_file(char* name)
{
  FILE* file;
  int lines = 0;
  int bytes = 0;
  int words = 0;
  char scratch[1024];
  file = fopen(name,"r");
  fprintf (stdout,"print_file(%s)\n", name);
  if (file != NULL)
  {
    while (fgets(scratch, 1024, file) != NULL)
    {
      bytes += string_length(scratch);
      words += word_count(scratch);
      lines++;
    }
    fprintf(stdout, "%s %d lines %d words %d bytes \n", name, lines, words, bytes);
    fclose(file);
  }

  return 0;
}

int string_length(char* string)
{
   int bytes=0;
   for (int i = 0; string[i] != '\0'; i++)
   {
     bytes++;
   }
   return bytes;
}

int word_count(char* string)
{
   int bytes=0;
   for (int i = 0; string[i] != '\0'; i++)
   {
     bytes++;
   }
   return bytes;
}
