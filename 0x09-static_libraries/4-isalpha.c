#include "holberton.h"
/**
 * _isalpha - determines if a number is alphanumeric
 * Return: 1 on alphanumeric 0 in false
 * @c: integer passed
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	return (0);
}
