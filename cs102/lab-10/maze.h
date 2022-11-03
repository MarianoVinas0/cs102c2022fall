typedef struct { int wall; } room_t;

void clear_maze();
int is_wall(int x);
void build_wall(int x);
void clear_wall(int x);
void set_location_x(int x);
int get_location_x();
void print_maze();
void move_right();
void move_left();
