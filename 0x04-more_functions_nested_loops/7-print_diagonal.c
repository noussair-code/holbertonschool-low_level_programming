#include "holberton.h"
/**
 * print_diagonal - check the code for Holberton School students.
 * @n: int n
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int j, i;

	j = 0;
	if (n > 0)
		for (i = 0 ; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
