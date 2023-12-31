#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_numbers - start
  * @separator: string btwn ints
  * @n: args
  * @...: var ints to print
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int k;

	va_start(ap, n);
	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(ap, int));
		if (k != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
