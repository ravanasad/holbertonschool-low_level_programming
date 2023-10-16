#include<stdio.h>
/**
 * main - Write a program that prints the
 * alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char a = 'z';

	for (; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
