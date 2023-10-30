#include <stdio.h>

/**
 * check_prime - Check if a number is prime.
 * @n: The number to check.
 * @x: The current factor being tested.
 * @c: The count of factors found.
 *
 * Return: 1 if prime, 0 if not.
 */
int check_prime(int n, int x, int c)
{
	if (c > 2)
	{
		return (0);
	}

	if (x > n / 2)
	{
		return (1);
	}

	if (n % x == 0)
	{
		return (check_prime(n, x + 1, c + 1));
	}
	else
	{
		return (check_prime(n, x + 1, c));
	}
}

/**
 * is_prime_number - Determine if a number is prime or not.
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n == 2 || n < 0)
	{
		return (0);
	}

	return (check_prime(n, 1, 1));
}
