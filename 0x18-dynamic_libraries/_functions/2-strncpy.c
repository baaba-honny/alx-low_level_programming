#include "main.h"
/**
*	*_strncpy - a function that copies a string
*	@dest: function parameter 1
*	@src: function parameter 2
*	@n: function parameter 3
*	Return: dest
*/
	char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
	dest[a] = src[a];
	}
	for (; a < n; a++)
	{
	dest[a] = '\0';
	}
	return (dest);
}
