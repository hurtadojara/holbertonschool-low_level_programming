#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - malloc a grid
 * Return: double pointer;
 * @height: height
 * @width: width
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * width);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int) * height);
		if (grid[i] == NULL)
		{
			free(grid[i]);
			return (NULL);
		}
	}
	return (grid);
}
