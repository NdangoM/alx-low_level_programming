#include "main.h"

/**
 * Print string
 * Resturn zero.
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
