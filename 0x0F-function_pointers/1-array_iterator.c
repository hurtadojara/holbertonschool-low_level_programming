#include "function_pointers.h"
/**
 * array_iterator - iterate over an array
 * @array: values
 * @size: size of arr
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
