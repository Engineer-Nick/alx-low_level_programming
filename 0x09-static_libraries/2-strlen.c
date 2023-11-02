#include "main.h"
/**
 * _strlen - this function returns the length of a string
 * @s: string length
 * Return: length
 */

int _strlen(char *s)
{
		int longq = 0;

	while (*s != '\0')
	{
		longq++;
		s++;
	}
	return (longq);
}
