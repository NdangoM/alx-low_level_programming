#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: counts number of arguments
 * @argv: size of the array of pointers
 *
 * Return: 0 Success, 1 Error.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (1);
	}
}
