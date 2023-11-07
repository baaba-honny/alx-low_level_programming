#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
*	_strlen - finds length of string
*	@str: string to be measured
*	Return: length of string
*/
	int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
*	_strcopy - copies a string poinnted to by src
*	@dest: buffer storiing the src
*	@src: source string
*	Return: The pointer to dest
*/
	char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
*	new_dog - creates new dog
*	@name: dog's name
*	@age: dog's age
*	@owner: dog's owner
*	Return: The new struct dog
*/
	dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggzy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggzy = malloc(sizeof(dog_t));
	if (doggzy == NULL)
		return (NULL);

	doggzy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggzy->owner == NULL)
	{
		free(doggzy->name);
		free(doggzy);
		return (NULL);
	}

	doggzy->name = _strcopy(doggzy->name, name);
	doggzy->age = age;
	doggzy->owner = _sttrcopy(doggzy->owner, owner);

	return (doggzy);
}
