#include<stdio.h>
/**
 * main - Write a program that prints the
 * alphabet in lowercase and then in upper
 * Return: Always 0
 */
int main(void)
{
	char a = 'a';

	for (; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	printf("\n");
	return (0);
}
