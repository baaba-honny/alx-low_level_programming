#include "main.h"
#include <stdlib.h>
/**
*	**alloc_grid - returns a pointer to a 2 dimensional array of integers.
*	@width: width of grid
*	@height: height of grid
*	Return: pointer to allocated grid
*/
	int **alloc_grid(int width, int height)
{
	int a, b;
	int **i;

	if (width <= 0 || height <= 0)
		return (NULL);

	i = malloc(sizeof(int *) * height);

	if (i == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		i[a] = malloc(sizeof(int) * width);

	if (i[a] == NULL)
	{
	for (b = 0; b < a; b++)
	{
		free(i[b]);
	}
		free(i);
		return (NULL);
	}
	}
	for (a = 0; a < height; a++)
	{
	for (b = 0; b < width; b++)
	{
		i[a][b] = 0;
	}
	}
		return (i);
}
