#include "holberton.h"
/**
 * times_table - print 9 times table.
 */
void times_table(void)
{
	int i;
	int j;
	int m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = i * j;
			if (m == 0 && j == 0)
			{
				_putchar(m + '0');
			}
			else
			{
				if (m < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(m + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(m / 10 + '0');
					_putchar(m % 10 + '0');
				}
			}
		}
		_putchar('\n');
	}
}
