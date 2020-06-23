#include "holberton.h"

/**
 * _strlen - length of a string.
 * @s: int
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int conta = 0, i;

	while (*(s + i) != '\0')
	{
		i++;
		conta++;
	}

	return (conta);
}
