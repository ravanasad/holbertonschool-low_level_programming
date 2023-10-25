#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * @str: first param.
 */

void puts2(char *str)
{
	int length = strlen(str), i = 0;

	for (; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
