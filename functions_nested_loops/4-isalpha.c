#include "main.h"
#include <stdio.h>

#include <ctype.h>
/**
 * _isalpha - checks for alphabetic character
 * @c: first param
 * Return: Always 1 if alpha, 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
