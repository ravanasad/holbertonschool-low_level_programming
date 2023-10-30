#include "main.h"
/**
* factorial - calculates the factorial of a number.
* @n: The number to calculate the factorial for.
*
* Return: The factorial of the number, or -1 if n is negative.
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

