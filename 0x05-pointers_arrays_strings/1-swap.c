#include "holberton.h"
/**
 * swap_int swap integers.
 * @a: integer
 * @b: integer
 */
void swap_int(int *a, int *b)
{
	int *p, *j, change;

	p = a;
	j = b;
	change = *j;
	*j = *a;
	*p = change;
}
