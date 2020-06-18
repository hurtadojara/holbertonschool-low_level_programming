#include "holberton.h"
/**
 * print_last_digit - does what name says
 * Return: last number
 * @n: takes number given
 */
int print_last_digit(int n)
{
	int digit;

	if (n > 9 || n < -9)
	{

		digit = n % 10;
		if (digit < 0)
		{
		digit = digit * -1;
		}
		_putchar(digit + '0');
		return (digit);
	}
	else if (n > -1 && n < 10)
	{
		_putchar(n + '0');
		return (n);
	}
}
