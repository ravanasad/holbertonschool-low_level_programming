#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: bytes
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int index = 0, i = 0;
	unsigned int count = 0;

	while (s[index] != ' ')
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[index] == accept[i])
			{
				count++;
				break;
			}
		}
		index++;
	}
	return (count);
}
