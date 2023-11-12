#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: count
 * @size: size
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	for (; arr[i]; i++)
		arr[i] = 0;

	return (arr);
}
