#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: separator
 * @n: params count
 * @...: params
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	va_start(list, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
