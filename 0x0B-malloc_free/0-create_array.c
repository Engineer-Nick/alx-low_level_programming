#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars,
* @size: the size of array
* @c: the  character
* Return: Pointer to array (Success), Null (Error)
*/
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int k = 0;

	n = malloc(size * sizeof(char));

	if (n == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (k < size)
	{
		n[k] = c;
		k++;
	}
	return (n);
}
