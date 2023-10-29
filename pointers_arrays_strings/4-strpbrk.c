#include <stdio.h>
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: bytes
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int index = 0, i = 0;

	while (s[index])
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[index] == accept[i])
			{
				return (s + index);
			}
		}
		index++;
	}
	return ('\0');
}
