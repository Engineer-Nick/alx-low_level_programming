#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num - check - string there are digit
* @str: array str
*
* Return: Always 0 (Success)
*/

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))

	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
* main - this function print program name
* @argc: Count arguments
* @argv: Arguments
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int b, str_to_int, c;

	b = 1;
	c = 0;
	while (b < argc)
	{
		if (check_num(argv[b]))
		{
			str_to_int = atoi(argv[b]);
			c += str_to_int;
		} else
		{
			printf("Error\n");
			return (1);
		}
		b++;
	}
	printf("%d\n", c);
	return (0);
}
