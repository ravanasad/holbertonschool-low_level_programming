#include "main.h"
#include <ctype.h>
/**
 * print_numbers - prints the numbers from 0 to 9
 */
void print_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}