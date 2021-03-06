#include "main.h"

/**
  * alloc_grid - allocates a grid
  * @width: homonim
  * @height: homonim
  * Return: Grid
  */
int **alloc_grid(int width, int height)
{
	int **gridmem, i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	gridmem = malloc(sizeof(int *) * height);
	if (gridmem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		gridmem[i] = malloc(sizeof(int) * width);
		if (gridmem[i] == NULL)
		{
			for (j = 0; j < width; j++)
			{
				free(gridmem[j]);
			}
			free(gridmem);
			for (j = 0; j < width; j++)
			{
				gridmem[i][j] = 0;
			}
		}
	}
	return (gridmem);
}
