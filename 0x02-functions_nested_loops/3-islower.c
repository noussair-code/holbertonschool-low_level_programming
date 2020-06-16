#include "holberton.h"
/**
 * _islower - hello betty
 *@c: dfdfdfd
 * Return: Description of the returned value
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (0);
	return (0);
}
