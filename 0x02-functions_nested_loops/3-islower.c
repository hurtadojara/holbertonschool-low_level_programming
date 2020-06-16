#include "holberton.h"
/**
 * _islower - determines if a number is lowercase
 * Return: 1 on lowercase 0 in false
 * @c: integer passed
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	return (0);
}
