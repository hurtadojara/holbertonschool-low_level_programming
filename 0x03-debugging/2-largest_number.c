#include "holberton.h"
/**
 * largest_number - return the largest number
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else if (c >= a && c >= b)
	{
		largest = c;
	}
	return (largest);
}
