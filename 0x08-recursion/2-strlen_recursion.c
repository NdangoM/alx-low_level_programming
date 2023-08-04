#include "main.h"

/**
 * _strlen_recursion - find the length of string
 * @s: the string
 *
 * Return: Integer.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s + 1));
}
