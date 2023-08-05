#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints its own name
 * @argc: counts number of arguments
 * @argv: vector of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", argv[0]);

	return (0);
}
