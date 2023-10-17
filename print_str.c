#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
* print_str - function that prints strings
* @s: the pointer pointing to the string
*@count: the number of characters printed
*/
void print_str(char *s, int *count)
{
	while (*s)
	{
		write(STDOUT_FILENO, s, 1);
		s++;
		(*count)++;
	}
}
