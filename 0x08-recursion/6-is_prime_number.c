#include"main.h"
int actual_prime(int n, int i);

/**
  * is_prime_number - returs 1 if the input integer is a prime
  * @n: input integer
  * Return: 1 if input integer is a prime number, 0 otherwise
  */
int is_prime_number(int n)
{
		if (n <= 1)
		return (0);
		return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to check
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int actual_prime(int n, int i)
{
		if (i == 1)
		return (1);
		if (n % i == 0 && i > 0)
		return (0);
		return (actual_prime(n, i - 1));
}
