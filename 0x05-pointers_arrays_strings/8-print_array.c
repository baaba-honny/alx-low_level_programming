#include "main.h"
#include <stdio.h>
/**
*	print_array - a function that prints elements of an array of integers
*	@a: first function parameter
*	@n: second function parameter
*/
	void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
	printf("%d", a[b]);
	if (b < n - 1)
	printf(", ");
	}
	printf("\n");
}
