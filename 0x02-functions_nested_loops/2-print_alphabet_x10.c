#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet in lowecase ten times
 */
void print_alphabet_x10(void)
{
	int counter, times;

	for (times = 0; times < 10; times++)
	{
	for (counter = 'a'; counter <= 'z'; counter++)
	{
		_putchar(counter);
	}
	_putchar(10);
	}
}
