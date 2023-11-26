#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: separator
 * @n: params count
 * @...: params
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	char *word;

	va_start(list, n);

	for (; i < n; i++)
	{
		word = va_arg(list, char *);
		if (word == NULL)
			printf("(nil)");
		else
			printf("%s", word);
		if (i != (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
