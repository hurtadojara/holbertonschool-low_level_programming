#include "holberton.h"
#include <stdlib.h>
#include <stdlib.h>
/**
 * create_array - creates an array
 * Return: return adress of the array
 * @size: size of malloc
 * @c: char
 */
char *create_array(unsigned int size, char c)
{
	char *ptrbfr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptrbfr = malloc(sizeof(char) * size);
	if (ptrbfr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptrbfr[i] = c;
	}
	return (ptrbfr);
}
