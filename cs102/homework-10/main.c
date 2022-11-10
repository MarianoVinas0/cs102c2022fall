#include <stdio.h>
#include "maze.h"
#include "file.h"

int main(int argc, char **argv)
{
  int i;
  int j;
  char word[100];
  clear_maze();
  char scratch[1024];
  if(argc > 1)
  {
    load(argv[1]);
  }
  print_maze();
  
  while (fgets(scratch, 1024, stdin) != NULL)
  {
    if(sscanf(scratch, "load %s", word) == 1)
    {
      load(word);
    }
    else if(scratch[0] == 'l'){
      move_left();
    }
    else if(scratch[0] == 'r'){
      move_right();
    }
    else if(scratch[0] == 'u'){
      move_up();
    }
    else if(scratch[0] == 'd'){
      move_down();
    }
    else if(sscanf(scratch, "wall %d %d", &i, &j) == 2)
    {
      build_wall(i, j);
    }
    else if(sscanf(scratch, "empty %d %d", &i, &j) == 2)
    {
      clear_wall(i, j);
    }
    else if(sscanf(scratch, "save %s", word) == 1)
    {
      save(word);
    } 
    else if(sscanf(scratch, "x %d", &i) == 1)
    {
      set_location_x(i);
    } 
    else if(sscanf(scratch, "y %d", &i) == 1)
    {
      set_location_y(i);
    }
    else if(sscanf(scratch, "treasure %d %d", &i, &j) == 2)
    {
      set_treasure(i, j);
    }

    print_maze();
   
    if(is_treasure(get_location_x(), get_location_y()))
    {
      fprintf(stdout, "YOU WIN!\n");
      break;
    }
  }
  fprintf(stdout, "\n");
  return 0;
}
