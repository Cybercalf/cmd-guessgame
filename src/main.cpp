#include "../game/game.h"
#include <conio.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

int main()
{
    bool game_exit = false;
    while (!game_exit)
    {
        system("cls");
        showDesktop();

        switch (_getch())
        {
        case '1':
            gamePlay();
            break;
        case '2':
            showHelp();
            break;
        case '9':
            showBeforeExit();
            game_exit = true;
            break;
        }
    }
    return 0;
}
