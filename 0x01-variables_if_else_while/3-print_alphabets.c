#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
**/

int main(void)
{
char a = 'a';
char B = 'A';

while (a <= 'z')
{
putchar(a);
a++;
}
while (B <= 'Z')
{
putchar(B);
B++;
}
putchar('\n');
return (0);
}
