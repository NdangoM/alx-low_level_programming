#include <stdio.h>

/**
 * main - print lowercase alphabets except q and e
 *
 * Return: 0 success
 */

int main(void)
{
	int i = 'a';

	for (i =  'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		putchar(i);
	}
	putchar('\n');
	return (0);
}
