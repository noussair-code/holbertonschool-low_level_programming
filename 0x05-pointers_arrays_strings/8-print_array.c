#include "holberton.h"
#include <stdio.h>
/**
* print_array - qsdfghjkhgfdsq
* @a: sqdfghjkhgfdsq
* @n: int
* Return: void
*/
void print_array(int *a, int n)
{
	int s;

	s = 0;
	n = n - 1;
	while (s <= n)
	{
		if (s != n)
		{
		printf("%d, ", a[s]);
		}
		else
		{
		printf("%d", a[s]);
		}
	s++;
	}

	printf("\n");
}
