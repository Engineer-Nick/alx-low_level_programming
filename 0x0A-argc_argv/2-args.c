#include <stdio.h>

/**
 * main - function prints all arguments passed
 * @argc: number of arguments
 * @argv: Array
 * Return: Always (0) Success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
{
		printf("%s\n", argv[i]);
}
	return (0);
}
