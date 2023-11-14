#include "main.h"
#include <stdlib.h>

/**
  * argstostr - start
  * @ac: int
  * @av: arr
  * Return: ptr
*/
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int a, x, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		s = av[a];
		x = 0;

		while (s[x++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if  (str == NULL)
		return (NULL);

	for (a = 0, x = 0; a < ac && x < len; a++)
	{
		s = av[a];
		k = 0;

		while (s[k])
		{
			str[x] = s[k];
			k++;
			x++;
		}
		str[x++] = '\n';
	}
	str[x] = '\0';
	return (str);
}
