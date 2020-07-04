#include "holberton.h"
/**
 * _memset - set n bytes of memory to char
 * Return: pointer to char
 * @s: string to be set
 * @b: the char to set
 * @n: n time to be set
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	p = s;
	return (p);
}
