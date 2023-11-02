#include "main.h"
/**
 * _strchr - function entry point
 * @s: input value
 * @c: input value
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
		int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		return (&s[x]);
	}
	return (0);
}

