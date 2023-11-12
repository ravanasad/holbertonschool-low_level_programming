#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Count
 * @size: Size
 *
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (unsigned int i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
