#include "holberton.h"
/**
 * main - main function
 * Return: void on success
 */
void print_alphabet(void)
{
	int counter;

	for (counter = 'a'; counter <= 'z'; counter++)
	{
		_putchar(counter);
	}
	_putchar(10);
	return;
}
