#include "holberton.h"

/**
 * times_table - function
 *
 * Return: 0
 */
void times_table(void)
{
	int i, u, y;

	for (i = 0; i < 10; i++)
	{
		for (u = 0; u < 10; u++)
		{
		y = u * i;
			if (y < 10)
				{
				if (u != 0)
					{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					}
				_putchar(y + '0');
				}
			else
				{
				if (u != 0)
					{
					_putchar(',');
					_putchar(' ');
					}
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
				}
		}
	_putchar('\n');
	}
}
