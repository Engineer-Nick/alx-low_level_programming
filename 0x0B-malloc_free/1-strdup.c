#include "main.h"
#include <stdlib.h>

/**
  * *_strdup - start
  * @str: string as a parameter
  * Return: Null if str = NULL elsei
 */
char *_strdup(char *str)
{
	char *m;
	unsigned int k, len;

	k = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	m = malloc(sizeof(char) * (len + 1));

	if (m == NULL)
		return (NULL);

	while ((m[k] = str[k]) != '\0')
		k++;

	return (m);
}
