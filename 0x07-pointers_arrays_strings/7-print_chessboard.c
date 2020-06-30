#include "holberton.h"
/**
 * 
 * 
 * 
 * 
 */
void print_chessboard(char (*a)[8])
{
	int i, k;
	char *array[] = a;

	for (i = 0; i < 8; i++)
	{
		k =  0;
		for (k = 0; k < 8; k++)
		{
			_putchar(*a[k]);
		}
	}
}