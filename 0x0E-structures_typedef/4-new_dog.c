#include "dog.h"

/**
 * _strlen - a function that gets a length of string
 * @str: the string to get the length
 *
 * Return: length of @str
*/

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
/**
 * _scpy - a function that returns @dest with a copy of a string from @src
 * @src: string to copy
 * @dest: copy string to here
 *
 * Return: @dest
*/

char *_scpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - create a new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 *
 * Return: pointer to dog, NULL if function fail
 */
 
dog_t *new_dog(char *name, float age, char *owner)
{
=
	dog_t dog;

	if (!name || !owner || age < 0)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _scpy(dog->name, name);
	dog->age = age;
	dog->owner = _scpy(dog->owner, owner);

	return (dog);
}
