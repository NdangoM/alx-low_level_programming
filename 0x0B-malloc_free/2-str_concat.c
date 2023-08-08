#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 2
 * @s2: string 2
 *
 * Return - 0 concantenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size, i;
	char *t, *u;

	t = malloc ((size + 1) * sizeof(t));
	if (t == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (i = 0; i < size; i++)
	{
		t[i] = s1;
	}
	return (t);

	u = malloc ((size + 1) * sizeof(u));
	if (u == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (i = 0; i < size; i++)
	{
		u[i] = s2;
	}
	return (u);

