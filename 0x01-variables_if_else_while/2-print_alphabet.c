#include <stdio.h>

/**
 * main - print lowercase alphabets
 *
 * Return: 0 success
 */

int main(void)
{
	int i = 'a';

	for (i =  'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
