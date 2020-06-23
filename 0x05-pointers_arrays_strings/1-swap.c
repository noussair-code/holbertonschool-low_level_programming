#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 *
 *
 * @a: var.
 * @b: var
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
