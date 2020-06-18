#include "holberton.h"
/**
 * print_most_numbers - print digits from 0 to 9 except 4 and 2
 */
void print_most_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		if (number != 4 && number != 2)
		_putchar(number + '0');
	}
	_putchar(10);
}
