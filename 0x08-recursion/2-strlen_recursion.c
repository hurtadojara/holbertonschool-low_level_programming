#include "holberton.h"
/**
 * _strlen_recursion - lenght of a string
 * @s: string
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	static int i = 1;

	if (s[i] == '\0')
		return (i);
	else if (*s)
		i++;
	_strlen_recursion(s++);
	return (i);
}
