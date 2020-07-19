#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints
 * @format: format
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = ", ";
	char *str;
	va_list valist;

	va_start(valist, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i + 1] == '\0')
			separator = "";
		switch (format[i])
		{
			case 'i':
				printf("%d%s", va_arg(valist, int), separator);
				break;
			case 'c':
				printf("%c%s", va_arg(valist, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(valist, double), separator);
				break;
			case 's':
				str = va_arg(valist, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, separator);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
