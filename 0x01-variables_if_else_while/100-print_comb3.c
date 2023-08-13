#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0 success
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
		putchar(i + '0');
		putchar(j + '0');
		if (j != 9 || i != 8)
		{
		putchar(44);
		putchar(32);
		}
		}
	}
	putchar('\n');
	return (0);
}
