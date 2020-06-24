#include "holberton.h"
/**
 * _strlen - returns a string lenght
 * @s: passed string
 * Return: lenght
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0';)
	{
		counter++;
	}
	return (counter);
}
