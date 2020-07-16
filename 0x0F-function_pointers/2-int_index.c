#include "function_pointers.h"
/**
 * int_index - index
 * Return: the index
 * @array: the array
 * @size: array size
 * @cmp: pointer to function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		int valor, index;

		for (valor = 0; valor <= size; valor++)
		{
			index = cmp(array[valor]);
			if (index != 0)
				return (valor);
		}
	}
	return (-1);
}
