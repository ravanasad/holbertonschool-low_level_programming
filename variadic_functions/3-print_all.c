#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - print char
 * @list: list
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_int - print int
 * @list: list
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_string - print string
 * @list: list
 */
void print_string(va_list list)
{
	printf("%s", va_arg(list, char *));
}
/**
 * print_float - print float
 * @list: list
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_all - print all of them
 * @format: format of params
 * @...: params
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j = 0;
	print_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != *(funcs[j].value))
			j++;
		if (j < 4)
		{
			funcs[j].func(list);
			if (format[i + 1] != '\0')
				printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
