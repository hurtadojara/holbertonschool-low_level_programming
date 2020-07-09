#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates
 * Return: pointer to string
 * @s1: string 1
 * @s2: string 2
 * @n: size to copy
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n >= j)
		ptr = malloc(sizeof(char) * (i + j + 1));
	else
		ptr = malloc(sizeof(char) * (i + n + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}
	for (l = 0; l < j && n >= j; l++, i++)
	{
		ptr[i] = s2[l];
	}
	for (l = 0; l < n && n < j; l++, i++)
	{
		ptr[i] = s2[l];
	}
	ptr[i] = '\0';
	return (ptr);
}
