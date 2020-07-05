#include "holberton.h"
/**
*_strcmp - concatenates strings
*
*@s1: dest
*
*@s2: src
*
*Return: character
*/
int _strcmp(char *s1, char *s2)
{
int a;
int b;
for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
{
if (s1[a] != s2[a])
{
b = s1[a] - s2[a];
s1[a + 1] = '\0';
}
else
b = 0;
}
return (b);
}
