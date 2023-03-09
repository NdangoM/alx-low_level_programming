#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input for the string
 * _strlen_recursion - return value
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);

	return (isprint(s[0]) + _strlen_recursion(s + 1));
}
