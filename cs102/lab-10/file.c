#include <stdio.h>
#include "file.h"
#include "maze.h"

void load(char* filename)
{
  FILE* f;
  int i;
  char scratchpad[1024];
  clear_maze();
  f = fopen(filename,"r");
  if(f != NULL)
  {
    while(fgets(scratchpad, 1024, f) != NULL)
    {
      if( sscanf(scratchpad, "WALL %d", &i) == 1 ) {
        build_wall(i);
      }
    }
  }
}

void save(char* filename)
{
  FILE* f;
  f = fopen(filename,"w");
  char scratchpad[1024];  
  for(int x=0; x<10; x++)
  {
    if(is_wall(x)){
      fprintf(f, "WALL %d \n", x);
    }
  }    
  fclose(f);
}
