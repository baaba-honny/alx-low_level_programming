#include "main.h"
/**
*	*_memcpy - copies memory area.
*	@dest: function parameter 1
*	@src: function parameter 2
*	@n: function parameter 3
*	Return: pointer to dest
*/
	char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);
}
