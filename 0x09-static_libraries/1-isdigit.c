#include "holberton.h"
/**
 * _isdigit - determines if a character is digit
 * Return: 1 on digit, 0 on no digit
 * @c: passed character
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
