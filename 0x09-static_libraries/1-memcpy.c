#include "main.h"
/**
 * _memcpy - funtion to copy memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * *@n: no  of bytes
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int q = 0;
	int s = n;

	for (; q < s; q++)
	{
		dest[q] = src[q];
		n--;
	}
	return (dest);
}

