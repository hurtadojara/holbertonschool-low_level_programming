#include "variadic_functions.h"
/**
 * print_numbers - print number
 * @separator: separator
 * @n: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int number;
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(arguments, int);
		printf("%i%s", number, (i != n - 1 && separator != NULL) ? separator : "");
	}
	putchar('\n');
	va_end(arguments);
}
