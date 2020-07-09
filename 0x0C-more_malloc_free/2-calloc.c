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

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
