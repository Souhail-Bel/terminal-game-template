#include <random>
#include <unistd.h>
#include <deque>
#include <iostream>

#include "logic.h"
#include "screen.h"

random_device rd;  // a seed source for the random number engine
mt19937 gen(rd()); // mersenne_twister_engine seeded with rd()

// Random X Y coords
uniform_int_distribution<> randX(0, WIDTH-1);
uniform_int_distribution<> randY(0, HEIGHT-1);

coords obj_coords = {0, 0};


void inputHandler(void){
	char c = 0;
	
	read(STDIN_FILENO, &c, 1);
	
	// If not going the opposite direction, follow
	// X is to exit
	switch(c) {
		case 'x':
			is_running = false;
			break;
	}
}

void update_obj(void){
	obj_coords.x = randX(gen);
	obj_coords.y = randY(gen);
}