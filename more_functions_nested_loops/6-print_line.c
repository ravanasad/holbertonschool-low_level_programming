#include "main.h"
#include <ctype.h>
/**
 * print_line - prints the numbers from 0 to 9
 * @n: first param for count of _
 */
void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('$');
	_putchar('\n');
}
