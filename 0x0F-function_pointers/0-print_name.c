#include "function_pointers.h"
/**
 * print_name - prints names
 * @name: name of function
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
