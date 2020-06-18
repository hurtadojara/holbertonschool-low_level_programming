#include "holberton.h"
/**
 * print_diagonal - print a diagonal
 * @n: integer passed
 */
void print_diagonal(int n)
{
	int counter, espacio;

	if (n <= 0)
		_putchar(10);
	for (counter = 0; counter < n; counter++)
	{
		while (espacio < counter)
		{
			_putchar(' ');
			espacio++;
		}
		_putchar('\\');
		espacio = 0;
		_putchar(10);
	}

}
