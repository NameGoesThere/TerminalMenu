# TerminalMenu
A simple terminal selection menu implemented in C

Works on Mac, Linux, and Windows (correct me if im wrong)
### Example:
```C
#include <stdio.h>
#include <stdlib.h>
#include "term_menu.h"

int main(int argc, char **args)
{
    char *title = "Terminal Menu";
    char **values = malloc(sizeof(char) * 16 * 6); // Selection options
    // Assigning values
    values[0] = "A";
    values[1] = "B";
    values[2] = "C";
    values[3] = "Option 1";
    values[4] = "Option 2";
    values[5] = "Option 3";
    int outputs[] = {0, 1, 2, 3, 4, 5}; // Possible return values
    char *out = values[menu(title, values, outputs, 6)]; // Shows menu and gets user input
    printf("\e[1;1H\e[2J"); // Clears console
    printf("You selected: %s!", out);
    return 0;
}
```
