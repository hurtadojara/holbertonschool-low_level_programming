#include "holberton.h"
/**
 * print_sign - print sign of the number given
 * Return: 0 on 0, 1 on upper than 0, -1 on lower than 0
 * @n: integer given
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar(48);
	return (0);
}
