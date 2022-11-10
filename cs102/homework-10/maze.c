#include <stdio.h>
#include "maze.h"
#include "file.h"

static int location_x;
static int location_y;
static room_t maze[10][10];


void clear_maze()
{
  for (int i = 0; i<10; i++)
  {
    for (int j = 0; j<10; j++)
    {
      maze[i][j].wall = 0;
    }
  }
}     

int is_wall(int x, int y)
{ 
  return maze[x][y].wall == 1;
}  

void build_wall(int x, int y)
{ 
  maze[x][y].wall = 1;
}

void clear_wall(int x, int y)
{
  maze[x][y].wall = 0;
  maze[x][y].treasure = 0;
}

void set_location_x(int x)
{
  location_x = x;
}

void set_location_y(int y)   
{
  location_y = y;
}

int is_treasure(int x, int y)
{
  return maze[x][y].treasure == 1;
}

void set_treasure(int x, int y)
{
  maze[x][y].treasure = 1;
}

int get_location_x()
{
  return location_x;
}

int get_location_y()
{
  return location_y;
}

void print_maze()
{
  for (int j = 0; j<10; j++)
  {
    for (int i = 0; i<10; i++)
    {
      if (is_wall(i, j))
      {
        fprintf(stdout, "##");
      }
      else if (i == get_location_x() && j == get_location_y())
      {
        fprintf(stdout, "x ");
      }
      else if (is_treasure(i, j))
      {
        fprintf(stdout, "T ");
      }
      else {
        fprintf(stdout, ". ");
      }
    }
    fprintf(stdout, "\n");
  }
  fprintf(stdout, "\n");
}

void move_right()
{
  int new_x = location_x+1;
  if(!is_wall(new_x, location_y) && new_x < 10)
  {
    set_location_x(new_x);
  }  
}

void move_left()
{
  int new_x = location_x-1;
  if(!is_wall(new_x, location_y) && new_x > -1)
  {  
    set_location_x(new_x);  
  }  
}

void move_down()
{
  int new_y = location_y+1;
  if(!is_wall(location_x, new_y) && new_y < 10)
  {
    set_location_y(new_y);
  }
}  

void move_up()
{
  int new_y = location_y-1;
  if(!is_wall(location_x, new_y) && new_y > -1)
  {
    set_location_y(new_y);
  }
} 
