#ifndef TERM_MENU
#define TERM_MENU

// Cursor movement functions
void moveUp(int positions);

void moveDown(int positions);

void moveRight(int positions);

void moveLeft(int positions);

void moveTo(int row, int col);

void setCol(int col);

// Keycodes for arrow keys
enum ArrowKeys
{
    UP = 72,
    DOWN = 80,
    LEFT = 75,
    RIGHT = 77
};

// Terminal Menu
int menu(char *title, char **values, int *outputs, int valuesLen);

#endif