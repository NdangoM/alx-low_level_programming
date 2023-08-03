#define "main.h"

/**
 * A function that returns length of string
 *
 * Return: Integer.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) +1);
}
