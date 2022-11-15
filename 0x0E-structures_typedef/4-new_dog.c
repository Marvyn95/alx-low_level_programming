#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new dog details
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doug;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doug = malloc(sizeof(dog_t));
	if (doug == NULL)
		return (NULL);

	doug->name = malloc(sizeof(char) * 30);
	if (doug->name == NULL)
	{
		free(doug);
		return (NULL);
	}

	doug->owner = malloc(sizeof(char) * 30);
	if (doug->owner == NULL)
	{
		free(doug->name);
		free(doug);
		return (NULL);
	}

	doug->name = strcpy(doug->name, name);
	doug->age = age;
	doug->owner = strcpy(doug->owner, owner);

	return (doug);
}
