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
	int i;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
