#include <stdio.h>
#include <stdlib.h>
/**
*	main - prints the opcodes of its own main function.
*	@argc: Number of arguments supplied
*	@argv: An array of pointers
*	Return: Always 0
*/
	int main(int argc, char *argv[])
{
	int bytes, index;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)

	printf("%.2x ", ((unsigned char *)main)[index]);

	printf("\n");
	return (0);
}
