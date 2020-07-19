#include "variadic_functions.h"
/**
 * sum_them_all - sums
 * @n: parameters
 * Return: result sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	int sum = 0;

	if (n != 0)
	{
		va_start(arguments, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(arguments, int);
		}
		va_end(arguments);
		return (sum);
	}
	va_end(arguments);
	return (0);
}
