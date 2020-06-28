#include "holberton.h"
/**
 * _strchr - search for first ocurrence of a c char on a string
 * Return: the ocuurence or eof
 * @s: string
 * @c: char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < 1000; i++)
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
		else if  (s[i] == '\0')
		{
			return ('\0');
		}
	}
}
