#include "holberton.h"
/**
* print_square - ou are so much sunshine in every square inch
* @size: int size
* Return: 0
**/
void print_square(int size)
{
	int i, b;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
