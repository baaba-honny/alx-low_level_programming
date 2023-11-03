#include "main.h"
#include <stdlib.h>
/**
*       *array_range - creates an array of integers.
*       @min: function parameter 1
*       @max: function parameter 2
*       Return: the pointer to the newly created array
*/
	int *array_range(int min, int max)
{
	int *n, a = 0;

	if (min > max)
		return (NULL);

	n = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (n == NULL)
		return (NULL);

	while (min <= max)
	{
	n[a] = min;
	a++;
	min++;
	}
	return (n);
}
