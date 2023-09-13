#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the 'n' times table, starting with 0
 * @n: The number for which the times table is generated
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j == 0)
				_putchar('0' + result);
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (result < 100)
				{
					_putchar(' ');
				}
				_putchar('0' + result / 100);
				_putchar('0' + (result / 10) % 10);
				_putchar('0' + result % 10);
			}
		}
			_putchar('\n');
	}
}
