#include <stdio.h>
/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: fills the first n bytes
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
