#include "main.h"
/**
*	*_strcat - concatenates two strings
*	@dest: function parameter 1
*	@src: function parameter 2
*	Return: dest
*/
	char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	dest++;

	for (i = 0; src[i] != '\0'; i++)
	src++;

	for (i = 0; i <= srclen; i++)

	{
	dest[destlen + i] = src[i];
	}
	return (dest);
}
