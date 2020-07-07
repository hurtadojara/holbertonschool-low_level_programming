#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate strings
 * Return: pointer to the string
 * @s1: string
 * @s2: string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *str;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
		}
	}
	else
		i = 0;
	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
		}
	}
	else
		j = 0;
	str = malloc(sizeof(char) * (i + j));
	if (str == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		str[k] = s1[k];
	}
	k = 0;
	for (k = 0; k < j; k++)
	{
		str[i + k] = s2[k];
	}
	return (str);
}
