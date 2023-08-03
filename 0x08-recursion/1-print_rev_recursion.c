#define "main.h"

/**
 * Write a function that prints a string
 * In reverse.
 *
 * Return: blank.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s);
	s = s+1;
	_putchar(*s);
}
