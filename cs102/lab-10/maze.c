#include <stdio.h>
#include "maze.h"
#include "file.h"

static int location_x;
static room_t maze[10];


void clear_maze()
{
  for (int i = 0; i<10; i++)
  {
    maze[i].wall = 0;
  }
}     

int is_wall(int x)
{ 
  return maze[x].wall == 1;
}  

void build_wall(int x)
{ 
  maze[x].wall = 1;
}

void clear_wall(int x)
{
  maze[x].wall = 0;
}

void set_location_x(int x)
{
  location_x = x;
}

int get_location_x()
{
  return location_x;
}

void print_maze()
{
  for (int i = 0; i<10; i++)
  {
    if (is_wall(i))
    {
      fprintf(stdout, "##");
    }
    else if (i == get_location_x())
    {
      fprintf(stdout, "x");
    }
    else {
      fprintf(stdout, ".");
    }
  }
  fprintf(stdout, "\n");
}

void move_right()
{
  int new_x = location_x+1;
  if(!is_wall(new_x) && new_x < 10)
  {
    set_location_x(new_x);
  }
}

void move_left()
{
  int new_x = location_x-1;
  if(!is_wall(new_x) && new_x > -1)
  {  
    set_location_x(new_x);  
  }  
}

