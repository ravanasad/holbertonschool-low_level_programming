#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	char a;

	if (n == '\0')
		return;
	print_binary(n >>= 1);
	a =  (n & 1) ? '1' : '0';
	_putchar(a);
}
