#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: value to be square rooted
 *
 * Return: root of the number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion(n, 1));
}

/**
 * _sqrt - calcutes the square root
 * @n: the integer to calculate the square root
 * @i: number to repeat
 * Return: a square root
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
