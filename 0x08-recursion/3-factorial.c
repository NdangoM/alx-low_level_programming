#include "main.h"

/**
 * factorial - return factorial of any number
 * @n: is input
 * Return: 0 or -1
 */

int factorial(int n)
{
	if (n == 0)
	return (1);
	else if (n > 0)
	return (n * factorial(n - 1));
	else
	return (-1);
}
