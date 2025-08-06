#ifndef LOGIC_H
#define LOGIC_H

extern bool is_running;

// Coords def
typedef struct coords{
	int x;
	int y;
} coords;


extern coords obj_coords;

void inputHandler(void);
void update_obj(void);

#endif