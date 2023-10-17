#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural
 * numbers from n to 98
 * @a: starter point
 * Return: That is void
 */

void print_to_98(int a)
{
	int i = a;

	if (a < 98)
	{
		for (; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}
