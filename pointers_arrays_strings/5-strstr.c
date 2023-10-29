#include <stdio.h>
/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int index = 0, i = 0;

	while (haystack[index])
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[index + i] != needle[i])
			{
				break;
			}
			else if (needle[i + 1] == '\0')
			{
				return (haystack + index);
			}
		}
		index++;
	}
	return ('\0');
}
