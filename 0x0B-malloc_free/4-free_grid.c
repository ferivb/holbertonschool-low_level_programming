#include "main.h"

/**
  * free_grid - frees the malloc from grid
  * @grid: malloc'ed grid
  * @height: homonim
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
