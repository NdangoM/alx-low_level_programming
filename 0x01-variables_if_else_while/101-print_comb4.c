#include <stdio.h>

/**
 * main - prints all possible combinations of three-digit numbers
 *
 * Return: 0 success
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
	for (j = i + 1; j <= 9; j++)
	{
	for (k = j + 1; k <= 9; k++)
	{
		putchar(i + '0');
		putchar(j + '0');
		putchar(k + '0');
		if (j != 8 || i != 7 || k != 9)
		{
		putchar(44);
		putchar(32);
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
