#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - find sum of them
 * @n: count of params
 * @...: numbers
 * Return: sum of them
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i = 0, sum = 0;
	if (n == 0)
		return (0);

	va_start(x, 0);
	for (; i < n; i++)
		sum += va_arg(x, int);
	va_end(x);
	return (sum);
}
