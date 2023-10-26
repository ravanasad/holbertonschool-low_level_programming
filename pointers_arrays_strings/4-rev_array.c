#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: size of a
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	for (; i < n / 2; i++)
	{
		int _temp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = _temp;
	}
}
