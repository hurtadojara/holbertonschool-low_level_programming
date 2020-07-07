#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates heapely a string
 * Return: return a pointer to the string
 * @str: string to copy
 */
char *_strdup(char *str)
{
	char *dup;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{

	}
	dup = malloc(sizeof(char) * i);
	if (dup == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		dup[j] = str[j];
	}
	return (dup);
}
