#include "holberton.h"
/**
 * print_square - print a square
 * @size: size of the square
 */
void print_square(int size)
{
	int contador, cuadritos;

	if (size <= 0)
	_putchar(10);
	for (contador = 0; contador < size; contador++)
	{
		for (cuadritos = 0; cuadritos < size; cuadritos++)
		{
			_putchar('#');
		}
	_putchar(10);
	}
}
