#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 * Return: Always 0
 */

void print_alphabet(void)
{
	int n = 97;

	for (; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
