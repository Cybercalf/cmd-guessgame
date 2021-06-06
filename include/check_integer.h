#include <math.h>
#include <string.h>

int getQulifiedInteger();

class QulifiedInteger
{
private:
    int temp_num[9];
    bool getQualifiedStr(const char *str)
    {
        for (int i = 0; i < int(strlen(str)); i++)
        {
            if (str[i] < '0' || str[i] > '9')
            {
                return false;
            }
        }
        return true;
    };

public:
    int qualified_num = -1;
    QulifiedInteger(const char *str)
    {
        int len = strlen(str);
        if (getQualifiedStr(str) && len >= 0 && len <= 9)
        {
            this->qualified_num = 0;
            for (int i = 0; i < len; i++)
            {
                this->temp_num[len - 1 - i] = str[i] - '0';
            }
            for (int i = 0; i < len; i++)
            {
                // Convert guess counts to int types
                this->qualified_num += this->temp_num[i] * int(pow(10, i));
            }
        }
    };
};