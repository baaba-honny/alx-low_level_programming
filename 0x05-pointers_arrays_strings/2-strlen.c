#include "main.h"
/**
*	 _strlen - a function that returns string length
*	 @s: string to be determined
*	 Return: the length of string
*/

	int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	length++;
	s++;
	return (length);
}
