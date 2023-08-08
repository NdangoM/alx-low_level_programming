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
	unsigned int i;
	unsigned int len = 0;
	char *t;

	t = malloc((len + 1) * sizeof(char));

	if (str == NULL || t == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	i = 0;
	for (i = 0; i < len; i++)
	{
		t[i] = str[i];
	}
	t[len] = '\0';
	return (t);
}
