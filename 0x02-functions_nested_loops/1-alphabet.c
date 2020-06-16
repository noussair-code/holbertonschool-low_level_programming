#include "holberton.h"
/**
 * print_alphabet - hello guys
 *
 *
 */
void print_alphabet(void)
{
int x;
x = 'a';
while (x <= 'z')
{
_putchar(x);
x = x + 1;
}
_putchar('\n');
}
