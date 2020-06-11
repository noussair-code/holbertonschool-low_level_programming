#include <stdio.h>
/**
* main - Alphabets
*
* Return: 0
**/
int main(void)
{
char a = 'a';

while (a <= 'z')
{
if ((a != 'e') && (a != 'q'))
{
putchar(a);
a++;
}
else
{
a++;
}
}
putchar('\n');
return (0);
}
