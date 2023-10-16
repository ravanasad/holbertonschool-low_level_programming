#include<stdio.h>
/**
 * main - prints all single digit numbers of base 10
 * starting from 0
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	for (; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
