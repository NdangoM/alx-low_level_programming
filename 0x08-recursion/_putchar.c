#include <unistd.h>

/**
* The _putchar.c necessary for projects
*/

int _putchar(char c) 
{
	return write(STDOUT_FILENO, &c, 1);
}
