#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - i - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
