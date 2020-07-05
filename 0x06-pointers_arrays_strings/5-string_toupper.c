#include "holberton.h"
/**
*string_toupper - lower to upper
*
*@s: pte
*
*Return: s succeed
*
*/
char *string_toupper(char *s)
{
int a;
for (a = 0; s[a] != 0; a++)
{
if (s[a] > 90 && s[a] != 10)
{
s[a] = s[a] - 32;
}
}
return (s);
}
