#include "main.h"
/**
*	 _strlen - a function that returns string length
*	 @s: function parameter
*	 Return: the length of string
*/

	int _strlen(char *s)
{
	int n;
	int count = 0;

	for (n = 0; s[n] != '\0'; n++)
	count++;

	return (count);
}
