#include <conio.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include "./check_integer.h"

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