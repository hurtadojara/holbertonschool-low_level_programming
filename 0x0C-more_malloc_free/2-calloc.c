#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - sets to 0
 * @nmemb: parameter
 * @size: parameter
 * Return: pointer;
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
