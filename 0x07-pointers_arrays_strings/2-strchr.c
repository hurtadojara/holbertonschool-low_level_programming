#include "holberton.h"
/**
 * _strchr - search for first ocurrence of a c char on a string
 * Return: the ocuurence or eof
 * @s: string
 * @c: char
 */
char *_strchr(char *s, char c)
{
	int i, j;
	char p[100], *a;

	if (*s == '\0')
		return ('\0');
	for (i = 0; s[i] != c; i++)
	{
	}
	if (s[i] == c)
	{
		for (j = 0; s[i] != '\0'; j++, i++)
		{
			p[j] = s[i];
		}
		p[j] = '\0';
		a = p;
		return (a);
	}
	else
		return ('\0');
}
