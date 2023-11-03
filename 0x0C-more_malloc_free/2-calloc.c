#include <stdlib.h>
#include "main.h"
/**
* _calloc -this function  allocates memory
* @nmemb: array
* @size: element size
* Return: the allocated memory pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *k;
	unsigned int i, num;

	if (nmemb == 0 || size == 0)
{
		return (NULL);
}
	num = nmemb * size;
	k = malloc(nmemb * size);
	if (k == NULL)
{
		return (NULL);
}
	for (i = 0; i < num; i++)
{
		k[i] = 0;
}
	return (k);
}
