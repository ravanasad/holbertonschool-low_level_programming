#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: first param.
 */

void puts_half(char *str)
{
	int i = strlen(str) / 2, length = strlen(str);

	if (length % 2 == 1)
		i++;

	for (; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
