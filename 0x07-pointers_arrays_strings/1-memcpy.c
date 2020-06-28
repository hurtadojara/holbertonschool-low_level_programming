#include "holberton.h"
/**
 * _memcpy - copies an bythes from src to dest
 * Return: returns a pointer to dest
 * @dest: destiny
 * @src: source
 * @n: number bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *p;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	p = dest;
	return (p);
}
