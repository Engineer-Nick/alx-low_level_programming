#include "variadic_functions.h"
#include  <stdarg.h>
/**
  * sum_them_all - start
  * @n: params
  * @... var sum
  * Return: int 0 else sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int k;
	int sum;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	for (k = 0; k < n; k++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
