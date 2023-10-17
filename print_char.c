#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
* print_char - function that handles the char specifier
* @count: the number of char printed
* @c: the address of the char
*/
void print_char(char c, int *count)
{
	write(STDOUT_FILENO, &c, 1);
	(*count)++;
}
