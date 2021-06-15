/* All functions that are important for running the game */
#include "check_integer.h"
#include "std_crate.h"

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

        puts("������Ҫ�²�Ĵ�����");
        while (1)
        {
            printf("%s", "? ");
            guess_time_limit = getQulifiedInteger();
            if (guess_time_limit > 0)
                break;
            else
                puts("��ʽ�������");
        }

        int magic_num = rand() % 10001;
        int guess_time = 0;
        bool end_guess = false;
        while (!end_guess)
        {
            if (guess_time >= guess_time_limit)
            {
                printf("�Բ�����ʧ���ˡ���ȷ��Ϊ%d��\n", magic_num);
                end_guess = true;
            }
            else
            {
                // ����²������
                int guess_num = -1;
                puts("\n���������²����(��������Χ0-10000)��");
                while (1)
                {
                    printf("%s", "? ");
                    guess_num = getQulifiedInteger();
                    if (guess_num >= 0 && guess_num <= 10000)
                        break;
                    else
                        puts("��ʽ�������");
                }
                guess_time++;
                guess_time_total++;
                // �жϴ�С
                if (guess_num == magic_num)
                {
                    printf("��ϲ���²���ȷ������β���%d�Ρ�\n", guess_time);
                    success_time++;
                    end_guess = true;
                }
                else
                {
                    if (guess_num > magic_num)
                        puts("�´��ˡ�");
                    else
                        puts("��С�ˡ�");
                }
            }
        }
        // after one round of guessing
        puts("���ֲ²����������һ�֣� y/n:");
        printf("%s", "> ");
        bool qualified_input = false;
        while (!qualified_input)
        {
            switch (_getch())
            {
            case 'N':
            case 'n':
                puts("");
                printf("����Ĵ�����%d\n", play_time);
                printf("�ܲ²������%d\n", guess_time_total);
                printf("ƽ���²������%.2f\n", guess_time_total * 1.0 / play_time);
                printf("�ɹ��ʣ�%.2f%%\n", 100 * success_time * 1.0 / play_time);
                Sleep(500);
                end_game = true;
            case 'Y':
            case 'y':
                qualified_input = true; // N��nûдbreak���ĸ���ĸ�����˳�while(!qualified_input)ѭ��
                break;
            default:
                break;
            }
        }
    }
    system("pause");
}