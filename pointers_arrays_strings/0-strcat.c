#include "main.h"
#include <string.h>
/**
 * *_strcat - concatenates two strings
 * @dest: destinition
 * @src: source
 * Return: concat str and des
 */

char *_strcat(char *dest, char *src)
{
	int length = 0, i = 0;

	while (dest[i])
	{
		length++;
		i++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[length + i] = src[i];
	}

	return (dest);
}
