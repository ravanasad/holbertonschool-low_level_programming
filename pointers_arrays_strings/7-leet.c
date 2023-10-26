#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @str:  text for encoding
 * Return: encoded text
 */

char *leet(char *str)
{
	char arr[5][2] = { {'E', '3'},
			   {'A', '4'},
			   {'O', '0'},
			   {'T', '7'},
			   {'L', '1'} };
	int i = 0, j;

	for (; str[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == arr[j][0] || str[i] - 32 == arr[j][0])
			{
				str[i] = arr[j][1];
				break;
			}
		}
	}
	return (str);
}
