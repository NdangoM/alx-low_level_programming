#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup -  a pointer to a newly allocated space in memory,
 * has copy of a string.
 * @str: character data type
 *
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	long unsigned int i, len;
	char *t;

	len = 6;
	t = malloc((len + 1) * sizeof(str));
	if (str == NULL || t == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (i = 0; i < len; i++)
	{
		t[i] = str[i];
	}
	return (t);
}
