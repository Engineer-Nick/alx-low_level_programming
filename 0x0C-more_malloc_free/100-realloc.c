#include <stdlib.h>
#include "main.h"
/**
  * _realloc - reallocates memory
  * @ptr: old pointer
  * @old_size: old size
  * @new_size: new size of memory
  * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a, *b;
	unsigned int c;

	if (new_size == old_size)
{
			return (ptr);
}
	if (new_size == 0 && ptr)
{
		free(ptr);
			return (NULL);
}
	if (!ptr)
{
			return (malloc(new_size));
}
	a = malloc(new_size);
	if (!a)
{
			return (NULL);
}
	b = a;
	if (new_size < old_size)
{
			for (c = 0; c < new_size; c++)
{
		a[c] = b[c];
}
	}
	if (new_size > old_size)
{
			for (c = 0; c < old_size; c++)
{
			a[c] = b[c];
}
}
	free(ptr);
				return (a);
}
