#include "main.h"
/**
*	print_diagonal - prints diagonal line
*	@n: number of times to print
*	Return: 0
*/
	void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	for (b = 0; b < a; b++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
