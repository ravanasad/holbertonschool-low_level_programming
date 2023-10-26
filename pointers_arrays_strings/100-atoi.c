#include <stdbool.h>
#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @str: number for checking
 * Return: number in str
 */

int _atoi(char *str)
{
	int i = 0;
        unsigned int val = 0;
	bool isNegative = false;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] == '-')
		{
			isNegative = !isNegative;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			val = (val * 10) + (str[i] - '0');
		}
		else if (val > 0)
		{
			break;
		}
	}
	val = isNegative ? val * -1 : val;
	return (val);
}
