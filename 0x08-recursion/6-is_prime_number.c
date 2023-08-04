#include "main.h"

/**
 * check - if this is a prime number 
 * @a: integer value
 * @b: integer value
 *
 * Return: integer
 */

int check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
 * is_prime_number - is input integer a prime number
 * @n: integer value
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
