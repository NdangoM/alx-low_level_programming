#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size in bytes
 * Return: a newly allocated space for concat string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int str1, str2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[str1] != '\0')
	{
		str1++;
	}
	while (s2[str2] != '\0')
	{
		str2++;
	}
	if (n >= str2)
		n = str2;

	ptr = malloc(sizeof(char) * (n + strlen(s1)) + 1);
	if (ptr == NULL)
		return (0);

	for (str1 = 0; str1 < strlen(s1); str1++)
	{
		ptr[str1] = s1[str1];
	}

	for (; str2 < (strlen(s1) + n); str2++)
	{
		ptr[str2] = s2[str2 - str1];
	}
	ptr[str1] = '\0';

return (ptr);
}
