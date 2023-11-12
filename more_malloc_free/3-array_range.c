#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min
 * @max: max
 * Return: If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, j = 0;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++, j++)
	{
		arr[j] = i;
	}
	return (arr);
}
