#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks for a digit
 * @c: first param for checking
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	return (isdigit(c) ? 1 : 0);
}
