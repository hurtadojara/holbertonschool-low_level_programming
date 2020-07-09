#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - prints a range of numbers
 * Return: pointer to malloc
 * @min: minimum value
 * @max: maximum value
 */
int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		;
	ptr = malloc(i * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = min; j <= max; j++)
	{
		ptr[j] = j;
	}
	return (ptr);
}
