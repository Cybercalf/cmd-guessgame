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
    puts("\n����һ��������Ϸ���¶�ϵͳ���������������ʤ��"
         "\n�����ָʾ���£�������Ϸ��������Ȥ��"
         "\n����������©�������н��飬��������ϵ���ߣ�����ָ����"
         "\nAuthor: Cybercalf(Hu Weiming, Sichuan University)"
         "\n2021.6.15");
    system("pause");
}

void showBeforeExit(void)
{
    puts("Goodbye!");
    system("pause");
}