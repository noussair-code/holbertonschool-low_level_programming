#include "holberton.h"
#include <stdio.h>
/**
 *_strcar - strcat
 *@dest: dest
 *@src: dest
 *Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i + j] = src[j];
j++;
}
return (dest);
}
