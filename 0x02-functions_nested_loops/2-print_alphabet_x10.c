#include "holberton.h"
/**
*print_alphabet_x10 - alpha x10
*
*Return 1
**/
void print_alphabet_x10(void)
{
int i;
int b;
for (i = 1; i <= 10; i++)
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
}
}
