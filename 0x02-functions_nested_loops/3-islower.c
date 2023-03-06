#include "main.h"
#include <ctype.h>
/**
 * _islower - check for char lowercase
 * @c: is the char to be checked
 * Return: 1, if lowercase otherwise 0 (success)
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar ('\n');
}
