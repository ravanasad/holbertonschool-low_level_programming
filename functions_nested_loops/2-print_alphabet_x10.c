#include "main.h"

void print_alphabet_x10(void)
{
	int a = 97;
	int n = 0;

	for (; n < 10; n++)
	{
		for (; a < 122; a++)
		{
			_putchar(a);
		}
		a = 97;
		_putchar('\n');
	}
}
