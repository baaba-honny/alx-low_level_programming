#include "main.h"
/**
*	print_line - a function that draws a straight line
*	@n: number of times the character should be printed
*	Return: 0
*/
	void print_line(int n)
{
	int a;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	for (a = 0; a < n; a++)
	{
	_putchar('_');
	}
	_putchar('\n');
}
