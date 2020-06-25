#include "holberton.h"
/**
 * _strncat - concatenate strings to n bytes
 * @dest: string destiny
 * @src: source string
 * @n: number of bytes
 * Return: return a pointer to the full string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
char *string;

for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; j < n; j++)
{
dest[i + j] += src[j];
}
string = dest;
return (string);
}
