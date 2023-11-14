#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - start
  * @width: one
  * @height: sec
  * Return: pointer to a 2d array
 */
int **alloc_grid(int width, int height)
{
	int **arr, k, x;
	int area = width * height;

	if (area <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		arr[k] = (int *)malloc(sizeof(int) * width);
		if (arr[k] == NULL)
		{
			for (k--; k >= 0; k--)
				free(arr[k]);
			free(arr);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
		for (x = 0; x < width; x++)
			arr[k][x] = 0;
	return (arr);
}
