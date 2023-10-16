#include<stdio.h>
/**
 * main - prints all the numbers of base 16
 * in lowercase
 * Return: Always 0
 */
int main(void)
{
	int n = 48;

	for (; n <= 102; n++)
	{
		putchar(n);
		if (n == 57)
		{
			n = 96;
		}
	}
	putchar('\n');
	return (0);
}
