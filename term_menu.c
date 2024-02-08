#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "term_menu.h"

// Cursor movement functions
void moveUp(int positions)
{
    printf("\x1b[%dA", positions);
}

void moveDown(int positions)
{
    printf("\x1b[%dB", positions);
}

void moveRight(int positions)
{
    printf("\x1b[%dC", positions);
}

void moveLeft(int positions)
{
    printf("\x1b[%dD", positions);
}

void moveTo(int row, int col)
{
    printf("\x1b[%d;%df", row, col);
}

void setCol(int col)
{
    printf("\x1b[%dG", col);
}

// Terminal Menu
int menu(char *title, char **values, int *outputs, int valuesLen)
{
    int selected = 0;
    char input;

    printf("%s\n", title);
    int i = 0;
    while (i < strlen(title))
    {
        printf("=");
        ++i;
    }
    for (i = 0; i < valuesLen; ++i)
    {
        printf("\n%s", values[i]);
    }
    moveUp(valuesLen - 1);
    setCol(0);
    while (input != 13 && input != 10)
    {
        input = getch();
        switch (input)
        {
        case UP:
            if (selected > 0)
            {
                moveUp(1);
                --selected;
            }
            break;
        case DOWN:
            if (selected < valuesLen - 1)
            {
                moveDown(1);
                ++selected;
            }
            break;
        default:
            break;
        }
    }

    return outputs[selected];
}