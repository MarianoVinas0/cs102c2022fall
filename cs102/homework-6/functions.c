#include <stdio.h>

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
 int length = string_length(string)-1;
 char c;
 char d;
 for(int i = 0; i < (length+1)/2; i++)
 {
  c = string[i];
  d = string[length-i];
  string[i] = d;
  string[length-i] = c;
 }
}
