#include "main.h"
/**
*	puts_half -  a function that prints half of a string
*	@str: function parameter
*/
	void puts_half(char *str)
{
	int i;
	int j;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	count++;
	j = (count - 1) / 2;
	for (i = j + 1; str[i] != '\0'; i++)
	_putchar(str[i]);
	_putchar('\n');
}
