#include <stdio.h>
#include "maze.h"
#include "file.h"

int main(int argc, char **argv)
{
  int i;
  char word[100];
  clear_maze();
  print_maze();
  char scratch[1024];
  while (fgets(scratch, 1024, stdin) != NULL)
  {
    if(scratch[0] == 'l'){
      move_left();
    }
    else if(scratch[0] == 'r'){
      move_right();
    }
    else if(sscanf(scratch, "wall %d", &i) == 1)
    {
      build_wall(i);
    }
    else if(sscanf(scratch, "empty %d", &i) == 1)
    {
      clear_wall(i);
    }
    else if(sscanf(scratch, "save %s", word) == 1)
    {
      save(word);
    } 
    else if(sscanf(scratch, "load %s", word) == 1)
    {
      load(word);
    }
    print_maze();
  }
  move_right();
  print_maze();
  move_left();
  print_maze();
  move_left();
  print_maze();
  move_left();
  print_maze();
  fprintf(stdout, "\n");
  return 0;
}

