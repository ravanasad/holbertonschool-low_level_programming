#include "main.h"
#include <string.h>
/**
 * *_strncat - concatenates two strings
 * @dest: destinition
 * @src: source
 * @n: count of letters
 * Return: concat str and des
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0, i = 0;

	while (dest[i])
	{
		length++;
		i++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[length + i] = src[i];
	}

	return (dest);
}
