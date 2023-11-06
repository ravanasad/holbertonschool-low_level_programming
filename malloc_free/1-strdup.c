#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocate
 * space in memory
 * @str: string
 * Return: NULL if str = NULL
 * else a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i = 0, size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	arr = malloc(size * sizeof(char));
	if (arr == 0)
		return (NULL);
	for (; i < size; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
