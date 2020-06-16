#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 *@x: dffdf
 * Return: Always 0.
 */
int print_last_digit(int x)
{
int n;

n = x % 10;
if (n >= 0)
{
_putchar(n + '0');
return (n);
}
else
{
_putchar(n * -1 + '0');
return (n * -1);
}
}
