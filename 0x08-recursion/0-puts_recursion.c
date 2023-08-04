#include "main.h"

/**
 * void _puts_recursion - Print string
 *
 * Return nothing.
 */

void _puts_recursion(char *s)
{
	/*Base code*/
	if (*s != '\0') 
	{
		_putchar(*s);
		}
	else 
	{
	_puts_recursion(s+1);
	_putchar('\n');
	}
}
