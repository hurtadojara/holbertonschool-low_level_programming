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

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	ptr = malloc(sizeof(char) * (i + j));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}
	if (n >= j)
	{
		for (l = 0; l < j; l++)
		{
			ptr[k + l] = s2[l];
		}
	}
	else
		{
		for (l = 0; l < n; l++)
		{
			ptr[k + l] = s2[l];
		}
	}
	return (ptr);
}
