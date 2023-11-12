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
	char *result;
	unsigned int len_s1 = 0, len_s2 = 0, i, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
		len_s1++;

	while (s2[len_s2])
		len_s2++;

	if (n >= len_s2)
		n = len_s2;

	result = malloc(sizeof(char) * (len_s1 + n + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		result[j++] = s1[i];

	for (i = 0; i < n; i++)
		result[j++] = s2[i];

	result[j] = '\0';
	return (result);
}
