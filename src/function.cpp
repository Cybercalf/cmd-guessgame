// All functions that are important for running the game
#include "../include/check_integer.h"
#include "../include/game.h"
#include <windows.h>

int getQulifiedInteger()
{
    /* takes a string input,
    converts it to a natural number if it can be converted and returns it,
    otherwise returns -1 */
    char temp_input[1000];
    memset(temp_input, '\0', sizeof(temp_input));
    scanf("%s", temp_input);
    return QulifiedInteger(temp_input).qualified_num;
}

void gamePlay()
{
    srand(time(0));
    int play_time = 0, success_time = 0, guess_time_total = 0;

    // main loop
    bool end_game = false;
    while (!end_game)
    {
        system("cls");
        play_time++;
        int guess_time_limit = 0;

        puts("请输入要猜测的次数：");
        while (1)
        {
            printf("%s", "? ");
            guess_time_limit = getQulifiedInteger();
            if (guess_time_limit > 0)
                break;
            else
                puts("格式输入错误。");
        }

        int magic_num = rand() % 10001;
        int guess_time = 0;
        bool end_guess = false;
        while (!end_guess)
        {
            if (guess_time >= guess_time_limit)
            {
                printf("对不起，您失败了。正确答案为%d。\n", magic_num);
                end_guess = true;
            }
            else
            {
                // 输入猜测的数字
                int guess_num = -1;
                puts("\n请输入您猜测的数(整数，范围0-10000)：");
                while (1)
                {
                    printf("%s", "? ");
                    guess_num = getQulifiedInteger();
                    if (guess_num >= 0 && guess_num <= 10000)
                        break;
                    else
                        puts("格式输入错误。");
                }
                guess_time++;
                guess_time_total++;
                // 判断大小
                if (guess_num == magic_num)
                {
                    printf("恭喜您猜测正确。您这次猜了%d次。\n", guess_time);
                    success_time++;
                    end_guess = true;
                }
                else
                {
                    if (guess_num > magic_num)
                        puts("猜大了。");
                    else
                        puts("猜小了。");
                }
            }
        }
        // after one round of guessing
        puts("本轮猜测结束！再来一轮？ y/n:");
        printf("%s", "> ");
        bool qualified_input = false;
        while (!qualified_input)
        {
            switch (_getch())
            {
            case 'N':
            case 'n':
                puts("");
                printf("你玩的次数：%d\n", play_time);
                printf("总猜测次数：%d\n", guess_time_total);
                printf("平均猜测次数：%.2f\n", guess_time_total * 1.0 / play_time);
                printf("成功率：%.2f%%\n", 100 * success_time * 1.0 / play_time);
                Sleep(500);
                end_game = true;
            case 'Y':
            case 'y':
                qualified_input = true; // N、n没写break，四个字母均可退出while(!qualified_input)循环
                break;
            default:
                break;
            }
        }
    }
    system("pause");
}