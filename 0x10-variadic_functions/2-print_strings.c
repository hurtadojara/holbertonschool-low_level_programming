#include "variadic_functions.h"
/**
 * print_strings - print chars
 * @separator: separator
 * @n: numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		separator = (separator != NULL) ? separator : "";
		str = va_arg(arguments, char*);
		str = (str != NULL) ? str : "(nil)";
		printf("%s%s", str, (i != n - 1) ? separator : "");
	}
	putchar('\n');
}
