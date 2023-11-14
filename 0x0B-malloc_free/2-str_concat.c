#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *str_concat - addition of a string
  * @s1: first part
  * @s2: second part
  * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	int k, x, len, len1, len2;
	char *res;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		k = 0;
		while (s1[k++] != '\0')
		len1++;
	}

	if (s2 != NULL)
	{
		k = 0;
		while (s2[k++] != '\0')
		len2++;
	}

	len = len1 + len2;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);

	for (k = 0; k < len1; k++)
		res[k] = s1[k];

	for (x = 0; x < len2; x++, k++)
		res[k] = s2[x];
	res[len] = '\0';

	return (res);
}
