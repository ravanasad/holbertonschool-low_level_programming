#include "main.h"
#include <stdio.h>

#include <ctype.h>
/**
 * _islower - checks for lowercase character
 * Return: Always 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
