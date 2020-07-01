#include "holberton.h"
/**
 * _puts_recursion - print a string recursively
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
		_putchar(10);
}
