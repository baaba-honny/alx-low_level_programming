#include "main.h"
/**
*	rev_string - a function that reverses a string
*	@s: function parameter
*/
	void rev_string(char *s)
{
	int n;
	int count = 0;

	for (n = 0; s[n] != '\0'; n++)
	count++;

	for (n = 0; n < count / 2; n++)
	{

	char i;

	i = s[n];
	s[n] = s[count - 1 - n];
	s[count - 1 - n] = i;
	}
}

