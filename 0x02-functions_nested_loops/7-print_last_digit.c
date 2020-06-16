#include "holberton.h"
/**
 * print_last_digit - does what name says
 * Return: last number
 * @n: takes number given
 */
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
		n = n * -1;
	if (n > 9)
	{
		digit = n % 10;
		_putchar(digit + '0');
		return (digit);
	}
	else if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
		return (n);
	}
}
