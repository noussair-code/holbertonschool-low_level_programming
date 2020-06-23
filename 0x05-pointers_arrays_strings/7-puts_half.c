#include "holberton.h"
/**
* puts_half - ssqdfghjkhgfds
* @str: dqsfghjkhgfdsq
*
* Return: int
*/
void puts_half(char *str)
{
	int g, halfmod, half, n;

	g = 0;
	while (str[g] != '\0')
	{
		g++;
	}

	half = g / 2;
	halfmod = g % 2;


	if (halfmod == 0)
	{
		g--;
		while (half <= g)
		{
		_putchar(str[half]);
		half = half + 1;
		}
	}
	else
	{
		n = (g - 1) / 2;
		n++;
		g--;
		while (n <= g)
		{
		_putchar(str[n]);
		n++;
		}
	}

	_putchar('\n');
}
