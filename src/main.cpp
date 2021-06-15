#include "game.h"
#include "std_crate.h"

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
