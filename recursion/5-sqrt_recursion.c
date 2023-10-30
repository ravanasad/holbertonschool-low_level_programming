#include "main.h"
/**
 * helper - calculates the integer square root recursively.
 * @n: The number to find the square root of.
 * @x: The current guess.
 *
 * Return: The integer square root of n,
 * or -1 if no integer square root is found.
 */
int helper(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if ((x * x) > n)
	{
		return (-1);
	}
	return (helper(n, x + 1));
}
/**
 * _sqrt_recursion - calculates the square root
 * of a number using a helper function.
 * @n: The number to find the square root of.
 *
 * Return: The square root of n, or -1 if n is negative.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (helper(n, 0));
}
