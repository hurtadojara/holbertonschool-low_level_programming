#include "holberton.h"
/**
 * print_triangle - triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int largo = 1, ancho, loop1 = size - 1, loop2 = 0, unloop;

	unloop = largo;
	if (size <= 0)
		_putchar(10);
	for (largo = 1; largo < size + 1; largo++)
	{
		for (ancho = 0; ancho < size; ancho++)
		{
			if (loop2 < loop1)
			{
				loop2++;
				_putchar('-');
			}
			else
			{
				_putchar('#');
			}
		}
	_putchar(10);
	if (largo != 1)
		unloop++;
	loop2 = unloop;
	}
}
