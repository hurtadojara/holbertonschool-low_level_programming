#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - create a malloc
 * Return: the pointer
 * @b: parameter
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
