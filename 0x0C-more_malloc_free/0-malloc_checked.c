#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - normal process termination
 * @b: to be allocated
 * Return:pointer to memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
{
		exit(98);
}
	else
{
		return (p);
}
}
