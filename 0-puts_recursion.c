#include "main.h"

/**
 * Print string
 */

void _puts_recursion(char *s)
{
	/*Base code*/
	if (*s != '\0') {
		_putchar(*s);
		_puts_recursion(s+1);
	}
	else 
	{
	_putchar('\n');
	}
}
