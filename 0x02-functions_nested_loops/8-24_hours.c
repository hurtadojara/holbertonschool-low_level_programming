#include "holberton.h"
/**
 * jack_bauer- display hours of day
 */
void jack_bauer(void)
{
	int min, hora;

	for (hora = 0; hora < 25; hora++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hora / 10) + '0');
			_putchar((hora % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');

		}
	}
}
