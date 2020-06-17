#include "holberton.h"
/**
 * times_table - multiply table
 * Return: rtable x9
 */
void times_table(void)
{
	int tabla, veces = 0, resultado = 0, boleano = 0;

	for (tabla = 0; veces < 10 && resultado != 81; veces++)
	{
		resultado = tabla * veces;
		if (veces < 10 && boleano == 1)
		{
			_putchar(',');
			_putchar(' ');
			if (resultado < 10)
			_putchar(' ');
		}
		boleano = 1;
		if (resultado < 10)
		{
			_putchar(resultado + '0');
		}
		else if (resultado >= 9)
		{
			_putchar((resultado / 10) + '0');
			_putchar((resultado % 10) + '0');
		}
		if (veces == 9)
		{
			_putchar('\n');
			tabla++;
			veces = -1;
			boleano = 0;
		}
	}

}
