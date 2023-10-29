#include <stdio.h>

/**
 * *_memcpy - copies memory area.
 * @dest: destinition
 * @src: source memory area
 * @n: copies n bytes
 * Return: pointer to dest;
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
