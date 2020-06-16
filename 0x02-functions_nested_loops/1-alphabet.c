#include "holberton.h"
/**
 * print_alphabet - main function
 */
void print_alphabet(void)
{
	int counter;

	for (counter = 'a'; counter <= 'z'; counter++)
	{
		_putchar(counter);
	}
	_putchar(10);
}
