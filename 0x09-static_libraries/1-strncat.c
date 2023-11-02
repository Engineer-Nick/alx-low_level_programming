#include "main.h"

/**
 * *_strncat - this function concatenates two strings
 * using at most n bytes from src
 * @dest: first string
 * @src: second string
 * @n: interge to be concatenated
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
			int p;
			int q;

	p = 0;
	q = 0;

	while (dest[p] != '\0')
		p++;

	while (src[q] != '\0' && q < n)
	{
		dest[p] = src[q];
		p++;
		q++;
	}

	dest[p] = '\0';

			return (dest);
}
