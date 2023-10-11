#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function to free a memory of dog
 * @d: pointer to dog_t
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
