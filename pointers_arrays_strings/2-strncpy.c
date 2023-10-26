#include "main.h"
#include <string.h>
/**
 * *_strncpy - concatenates two strings
 * @dest: destinition
 * @src: source
 * @n: count of letters
 * Return: concat str and des
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length = 0, i = 0;

	while (src[i])
	{
		length++;
		i++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = length; i < n; i++)
	{
		dest[i] = '\0';
	}


	return (dest);
}
