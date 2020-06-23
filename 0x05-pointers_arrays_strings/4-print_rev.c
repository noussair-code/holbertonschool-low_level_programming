#include "holberton.h"

/**
 * print_rev - print in reverse
 * @s: var
 *
 * Return: 0.
 */
void print_rev(char *s)
{
	int r = 0;

	while (*s != 0)
	{
		s++;
		r++;
	}
	s--;
	r--;

	while (r >= 0)
	{
		_putchar(*s);
		s--;
		r--;
	}
	_putchar('\n');
}
