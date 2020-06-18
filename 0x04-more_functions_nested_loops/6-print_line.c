#include "holberton.h"
/**
 * print_line - print lines
 * @n: integer passed
 */
void print_line(int n)
{
	int contador;

	if (n < 1)
	{
		_putchar(10);
	}
	for (contador = 0; contador < n; contador++)
	{
		_putchar(95);
		if (contador == n - 1)
			_putchar(10);
	}
}
