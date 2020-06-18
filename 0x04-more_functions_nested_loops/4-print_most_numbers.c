#include "holberton.h"
/**
 * print_most_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int a = 0;

while (a < 10)
{
if ((a != 2) && (a != 4))
{
_putchar(a + '0');
a++;
}
else
{
a++;
}
}
_putchar('\n');
}
