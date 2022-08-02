#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Defines a new type struct dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Define a new type struct dog with the following elements
 * name, type = char *::age, type = float::owner, type = char *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
