#include "main.h"
/**
*	 print_binary - prints the binary representation of a number.
*	 _pow - calculates (base ^ power)
*	 @n: number to print
*	 Return: void
*/

void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8;
	int flag = 0;

	for (size--; size >= 0; size--)
	{
	if ((n >> size) & 1)
	{
		_putchar('1');
		flag = 1;
	}
	else if (flag || size == 0)
	{
		_putchar('0');
	}
	}
}
