#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: the string
 * @c: Characters that we find in a string
 * Return: pointer to the first occurrence of the
 * character c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
