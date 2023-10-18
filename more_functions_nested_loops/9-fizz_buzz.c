#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the numbers from 1 to 100
 * but for multiples of three print Fizz
 * and for the multiples of five print Buzz
 * both three and five print FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int i;


	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
