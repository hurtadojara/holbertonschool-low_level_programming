#include "holberton.h"
/**
 * print_line - print lines
 * @n: integer passed
 */
void print_line(int n)
{
	int veces;

	if (n <= 0)
		_putchar(10);
	for (veces = 0; veces < n; veces++)
	{
		_putchar('_');
	}
	_putchar(10);
}
