#include "main.h"
/**
  * _isdigit - Function checks digit
  * @y: digit to be checked
  * Return: 1 if q is a digit, 0 otherwise.
  */

int _isdigit(int q)
{
	if (q >= '0' && q <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

