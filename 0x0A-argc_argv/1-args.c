#include <stdio.h>
#include "main.h"

/**
 * main -i this program will print the number of arguments passed
 * @argc: number
 * @argv: array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
		(void) argv; /*ignore argv*/
		printf("%d\n", argc - 1);

	return (0);
}
