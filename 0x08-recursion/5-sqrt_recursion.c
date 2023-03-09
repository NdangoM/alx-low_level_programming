#include "main.h"

/**
 * _sqrt_recursion - Finds the natural square root
 * @n: The number to find the square root of (base)
 * @y: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
*/

int _sqrt_recursion(int n, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (1 / (n * _sqrt_recursion(n, y - 1)));
}
