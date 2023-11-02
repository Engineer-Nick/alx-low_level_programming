#include "main.h"
/**
 * _memset - this program fills a block of memory with a specific value
 * @s: starting address
 * @b: the desired value
 * @n: bytes to be changed
 *
 * Return: change  array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
		int j = 0;

		for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
		return (s);
}

