#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars initialized by space char
 * @size: unsigned int data type
 * @c: char data type
 *
 * Return: pointer to array.
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	t = malloc(size * sizeof(char));
	if (t == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		t[i] = c;
		i++;
	}
	t[i] = '\0';
	return (t);
}
