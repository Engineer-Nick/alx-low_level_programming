#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_strings - start
  * @separator: print string in btwn
  * @n: args
  * @...: var params
  * Return: null
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int k;

	va_start(ap, n);
	for (k = 0; k < n; k++)
	{
		char *s = va_arg(ap, char *);

		if (s != NULL)
		{
		printf("%s", s);
		}
		else
		{
			printf("(nil)");
			continue;
		}
		if (k != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
