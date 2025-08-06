#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include <vector>

using namespace std;

// Dimensions
extern const int WIDTH;
extern const int HEIGHT;

// Elements display
extern const string backdrop;
extern const string boundary;
extern const string obj_gfx;

// Display buffer
extern vector<string> disp_buffer;
extern vector<string> disp_buffer_prev;

constexpr int get_idx(int x, int y);
void printStringAt(string a, int x, int y);
void refreshScreen(void);
void nonBlockingInput(void);
void initGame(void);
void restoreInput(void);
void exitGame(void);
void update_buffer(void);
void render(void);

#endif