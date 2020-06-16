#include "holberton.h"
/**
 * _abs - takes absolute value
 * Return: absolute number
 * @n: takes number given
 */
int _abs(int n)
{
	int absolute = 1;

	if(n > 0)
		return (n);
	absolute = n * -1;
	return (absolute);
}
