#include"main.h"

/**
  * _puts - prints a string to stdout
  * @str:  string to be outputed
  *putchar prints a new line
  */

void _puts(char *str)
{
	while (*str != '\0')
{
		_putchar(*str);
		str++;
}
		_putchar('\n');
}
