#include "main.h"

/**
 * alloc_grid - function
 * @width: int
 * @height: int
 * Return: a int array grid
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **array;

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(array + i) = malloc(sizeof(int) * width);
		if (*(array + i) == NULL)
		{
			while (i >= 0)
			{
				free(*(array + i));
				i--;
			}
			i = 0;
			for (i = 0; i < height; i++)
			{
				free(array + i);
			}
			break;
		}
		for (j = 0; j < width; j++)
		{

			*(*(array + i) + j) = 0;
		}
	}
	if (array == NULL)
		return (NULL);
	else
		return (array);
}
