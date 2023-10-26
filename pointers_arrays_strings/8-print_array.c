#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - prints array
 * @a: array
 * @n: size of array
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
