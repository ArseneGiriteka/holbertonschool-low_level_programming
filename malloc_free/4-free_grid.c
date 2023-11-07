#include "main.h"
/**
 * free_grid - function
 * @grid: a 2D grid
 * @height: a integer value
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(*(grid + i));
		i++;
	}
	free(grid);
}
