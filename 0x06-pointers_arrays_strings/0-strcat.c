#include "holberton.h"
/**
 * _strcat - concatenate strings
 * @dest: string destiny
 * @src: source string
 * Return: return a pointer to the full string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	char *final;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}
	for (j = 0; src[j] != '\0';)
	{
		dest[i + j] += src[j];
		j++;
	}
	final = dest;
	return (final);
}
