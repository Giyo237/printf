#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
* handle_char - a function that handles the char
*@tse: argument
*@count: number of character
*/
void handle_char(va_list tse, int *count)
{
	char c;

	c = va_arg(tse, int);
	print_char(c, count);
}
