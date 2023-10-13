#include "main.h"
/**
*	print_triangle - prints triangles
*	@size: size of the triangle
*	Return: 0
*/
	void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 1; a <= size; a++)
	{
	for (b = 1; b <= size - a; b++)
	{
	_putchar(' ');
	}
	for (b = 1; b <= a; b++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
