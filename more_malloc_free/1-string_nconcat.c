#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n characters from s2
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of characters to concatenate from s2
 *
 * Return: A pointer to the concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		j++;

	s = malloc(sizeof(char) * (j + 1 + n));

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s[i] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		s[i + j] = s2[i];

	s[j + n] = '\0';
	return (s);
}
