#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * in lowercase
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int a = 97;
	int n = 0;

	for (; n < 10; n++)
	{
		for (; a <= 122; a++)
		{
			_putchar(a);
		}
		a = 97;
		_putchar('\n');
	}
}
