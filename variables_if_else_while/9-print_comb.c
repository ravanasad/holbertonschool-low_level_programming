#include <stdio.h>

/**
 * main - prints all possible combinations of
 * single-digit numbers.
 * Return: Always 0
 */


int main(void)
{
	int n = 48;

	for ( ; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
