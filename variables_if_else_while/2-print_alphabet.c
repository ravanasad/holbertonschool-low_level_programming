#include<stdio.h>
/**
 * main - Write a program that prints the
 * alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char a = 'a';

	for (; a <= 'z'; a++)
	{
		putchar(a);
	}
	printf("\n");
	return (0);
}
