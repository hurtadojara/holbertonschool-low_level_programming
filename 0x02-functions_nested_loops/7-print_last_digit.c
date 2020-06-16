#include "holberton.h"
/**
 * print_last_digit - does what name says
 * Return: last number
 * @n: takes number given
 */
int print_last_digit(int n)
{
	int digit;

	if (n < 10)
	{
		_putchar(n);
		return (n);
	}
	else
	{
		digit = n % 10;
		_putchar(digit);
		return (digit);
	}
}
