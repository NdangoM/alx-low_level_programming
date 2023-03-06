#include "main.h"
/**
 * _isalpha - chescks for alphabetic character
 * @c: is the char to be checked
 * Return: 1 is a letter, lowercase or uppercase or 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
