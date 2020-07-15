#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints names
 * @name: name of function
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
