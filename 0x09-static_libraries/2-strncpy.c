#include "main.h"
/**
* _strncpy - this function copies a string
* @dest: string destination
* @src: string source
* @n: input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (a < n && src[a] != '\0')
{
		dest[a] = src[a];
		a++;
}
	while (a < n)
{
		dest[a] = '\0';
		a++;
}
	return (dest);
}
