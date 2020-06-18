#include "holberton.h"
/**
 * _isupper - determines if a character is uppercase
 * Return: 1 on upper, 0 on no upper
 * @c: passed character
 */
int _isupper(int c)
{
	if (c > 64 $$ c < 91)
		return (1);
	else
		return (0);
}
