#include "main.h"

/**
 * times_table - prints the 9 times table,
 * starting with 0
 * Return: That is void no return
 */

void times_table(void)
{
	int i = 0, n;

	for (; i < 10; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			if ((i * n) / 10 > 0)
			{
				_putchar((i * n) / 10 + '0');
			}
			_putchar((i * n) % 10 + '0');
			if (n != 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((i * n) / 10 == 0)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
