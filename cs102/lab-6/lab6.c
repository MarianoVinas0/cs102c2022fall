#include <stdio.h>
int string_length( char* string );
void reverse_string( char* string );

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

int string_length( char* string)
{
 int size = 0;
 for (int i = 0; string[i] != '\0'; i++)
 {
  size++;
 }
 return size;
}

void reverse_string( char* string )
{
 int length = string_length(string);
 char c = string[0];
 char d = string[length-1];
 string[length-1] = c;
 string[0] = d;
}
