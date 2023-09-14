#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: The number of times to print the table
 */

void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int result;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j == 0)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
				}
				else if (result < 100)
				{
					_putchar(' ');
					_putchar('0' + (result / 10));
					_putchar('0' + (result % 10));
				}
				else
				{
					_putchar('0' + (result / 100));
					_putchar('0' + ((result / 10) % 10));
					+putchar('0' + (result % 10));
				}
			}
		}
		_putchar('\n');
	}
}
