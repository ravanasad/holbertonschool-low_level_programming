#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: first param.
 */
void rev_string(char *s)
{
	int i = strlen(s) / 2, j = 0;

	for (; j < i; j++)
	{
		char temp = s[j];
		s[j] = s[strlen(s) - 1 -j];
		s[strlen(s) - 1 - j] = temp;
	}
}
