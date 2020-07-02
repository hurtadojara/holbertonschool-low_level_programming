#include "holberton.h"
/**
 * print_diagsums - prints
 * @a: thing
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, d1, diago1, n = size * size;

	for (i = 0; i < n; i++)
	{
		if (i % (size + 1) == 0)
		{
			d1 += a[i];
		}
	}
	for (i = n - size; i > 0; i--)
	{
		if (i % (size - 1) == 0)
		{
			diago1 += a[i];
		}
		printf("%d, %d\n", d1, diago1);
	}
}
