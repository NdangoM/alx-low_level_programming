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
	unsigned int i, m;
	unsigned int len = 0;
	char **t;

	t = malloc((len + 1) * sizeof(char));

	if (str == NULL || t == NULL)
	{
		return (NULL);
	}
	i = 0;
	m = len;
	if (t != NULL)
	{
	for (i = 0; i < len; i++)
	{
		t[i] = malloc(m * sizeof(*t));
	}
	}
	t[len] = '\0';
	return (*t);
}
