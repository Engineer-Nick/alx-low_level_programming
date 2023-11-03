#include <stdlib.h>
#include "main.h"
/**
  * array_range - this function creates integer array
  * @min: begining of range
  * @max: end
  * Return:pointer
  */
int *array_range(int min, int max)
{
	int *s;
	int t;

	if (min > max)
{
		return (NULL);
}
	s = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
{
		return (NULL);
}
	for (t = 0; min <= max; min++, t++)
{
		s[t] = min;
}
	return (s);
}
