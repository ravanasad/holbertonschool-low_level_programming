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
	dest = strcat(dest, src);
	return (dest);
}
