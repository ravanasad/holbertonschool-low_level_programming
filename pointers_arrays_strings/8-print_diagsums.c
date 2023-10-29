#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i = 0, lsum = 0, rsum = 0;

	for (; i < size; i++)
	{
		lsum += a[i];
		rsum += a[size - 1 - i];
		a += size;
	}
	printf("%d, %d\n", lsum, rsum);
}
