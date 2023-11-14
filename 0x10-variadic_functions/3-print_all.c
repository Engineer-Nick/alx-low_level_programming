#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - start
  * @format: args to be passed
  * Return: nothing
*/
void print_all(const char * const format, ...)
{
	int k;
	char *str, *str2 = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", str2, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", str2, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", str2, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char*);
					if (!str)
					{
						str = "(nil)";
					}
					printf("%s%s", str2, str);
					break;
				default:
					k++;
					continue;
			}
			str2 = ", ";
			k++;
		}
	}
	printf("\n");
	va_end(list);
}
