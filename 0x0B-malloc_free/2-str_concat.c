#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return - 0 pointer to concat string, return NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int n, i;
	char *a;

	n = 0;
	a = malloc(n * sizeof(char));
	if (!a)
	{
		return (NULL);
	}
	i = 0;
	while (a[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < (n + 1); i++)
	{
		a[i] = s1[i];
		i++;
	}
	a[i] = '\0';
	return (a);
	/* second string and concatenate*/
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (a);
}
