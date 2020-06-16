#include "holberton.h"
/**
* isalpha - check for the alphabitic char
*
* Return: Always 0.
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <='z') || (c >= 'A' && c <= 'z'))
return (1);
else
return (0);
}
