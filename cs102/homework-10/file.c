#include <stdio.h>
#include "file.h"
#include "maze.h"

void load(char* filename)
{
  FILE* f;
  int i;
  int j;
  char scratchpad[1024];
  clear_maze();
  f = fopen(filename,"r");
  if(f != NULL)
  {
    while(fgets(scratchpad, 1024, f) != NULL)
    {
      if( sscanf(scratchpad, "WALL %d %d", &i, &j) == 2 ) {
        build_wall(i, j);
      }
      else if(sscanf(scratchpad, "X %d", &i) == 1) {
        set_location_x(i);
      }
      else if(sscanf(scratchpad, "Y %d", &i) == 1) {
        set_location_y(i);
      }
      else if(sscanf(scratchpad, "TREASURE %d %d", &i, &j) == 2)
      {
        set_treasure(i, j);
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
    for(int y=0; y<10; y++){
      if(is_wall(x,y))
      {
        fprintf(f, "WALL %d %d \n", x, y);
      }
      else if(is_treasure(x,y))
      {
        fprintf(f, "TREASURE %d %d \n", x, y);
      }
    }
  } 
  fprintf(f, "X %d \n", get_location_x());   
  fprintf(f, "Y %d \n", get_location_y());                  
  fclose(f);
}
