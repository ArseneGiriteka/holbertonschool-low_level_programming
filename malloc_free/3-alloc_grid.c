#include "main.h"

/**
 * alloc_grid - function
 *
 * @width: integer value
 *
 * @height: integer value
 *
 * Return: integer 2D grid
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **grid;

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(grid + i) = malloc(sizeof(int) * width);

		if (*(grid + i) == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(grid + i) + j) = 0;
		}
	}
	return (grid);
}
