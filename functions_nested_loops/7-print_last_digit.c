#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 * @c: first param
 * Return: last digit of number
 */

int print_last_digit(int c)
{
	int last = abs(c) % 10;

	_putchar('0' + last);
	return (last);
}
