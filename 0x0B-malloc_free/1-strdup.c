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
	char *dupstr;
	unsigned int m, i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	m = 0;
	dupstr = malloc(sizeof(char) * (m + 1));
	for (i = 0; i < m; i++)
	{
		dupstr[i] = str[i];
	}
	dupstr[m] = '\0';
	return (dupstr);
	if (dupstr == NULL)
	{
		return (NULL);
	}
}
