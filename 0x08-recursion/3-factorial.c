#define "main.h"

/**
 * Function for a factorial number
 * @n: the factorial to be calculated
 *
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n -1));
}
