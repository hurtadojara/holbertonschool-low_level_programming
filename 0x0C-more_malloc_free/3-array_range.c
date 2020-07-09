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
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
