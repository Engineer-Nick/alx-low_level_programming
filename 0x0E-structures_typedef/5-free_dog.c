#include "dog.h"
#include <stdlib.h>
/**
  * free_dog -free mem allocation
  * @d: struct to be freed
  * Retun void
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