#include "holberton.h"
/**
 * _strlen_recursion - lenght of a string
 * @s: string
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	static int i = 1;

	if (*s)
	{
		if (*s != '\0')
		{
			_strlen_recursion(s + 1);
			i++;
		}
	}
	return (i - 1);
}
