#include <stdio.h>
/**
*	main - this is a function
*	Return: always zero
*/
	int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; ++l)
	if (l != 'e' && l != 'q')
	putchar(l);
	putchar('\n');
	return (0);
}
