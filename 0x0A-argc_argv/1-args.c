#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments passed onto program
 * @argc: counts the arguments
 * @argv: array of size argc
 *
 * Return: 0 Success
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	if (argc > 0)
	printf("%d\n", argc - 1);

	return (0);
}
