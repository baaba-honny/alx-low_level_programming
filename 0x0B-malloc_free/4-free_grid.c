#include "main.h"
#include <stdlib.h>
/**
*	free_grid -  frees a 2 dimensional grid previously created
*	@grid: function parameter 1
*	@height: function parameter 2
*	Return: 0
*/
	void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
