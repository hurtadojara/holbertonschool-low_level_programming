#include "holberton.h"
/**
 * is_prime_number - p number
 * Return: int
 * @n: number
 */
int is_prime_number(int n)
{
	if (n == 2 || n == 3 || n == 5 || n == 7)
	{
		return (1);
	}
	else if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
	{
		return (1);
	}
	else
	{
	return (0);
	}
	return (0);
}
