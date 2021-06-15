// All functions that return void and do not require a parameter
#include "std_crate.h"

void showDesktop(void)
{
    puts("");
    puts("**********************");
    puts("*                    *");
    puts("*     !WELCOME!      *");
    puts("*                    *");
    puts("**********************");
    puts("\n     * Play(1) *"
         "\n     * Help(2) *"
         "\n     * Exit(9) *"
         "\n");
    printf("%s", "> ");
}

void showHelp(void)
{
    puts("\n这是一个猜数游戏，猜对系统给出的随机数即获胜。"
         "\n请根据指示行事，享受游戏带来的乐趣。"
         "\n程序难免有漏洞，如有建议，恳请您联系作者，批评指正。"
         "\nAuthor: Cybercalf(Hu Weiming, Sichuan University)"
         "\n2021.2.25");
    system("pause");
}

void showBeforeExit(void)
{
    puts("Goodbye!");
    system("pause");
}