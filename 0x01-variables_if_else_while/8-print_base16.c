#include <stdio.h>
/**
*	main - entry point
*	Return: always zero
*/

	int main(void)
{
	char a;

	for (a = '0'; a <= '9'; ++a)
	putchar(a);
	for (a = 'a'; a <= 'f'; ++a)
	putchar(a);

	putchar('\n');

	return (0);
}
