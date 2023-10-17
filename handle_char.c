#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
* handle_char - function that checks for characters
*@args: the argument
*@count:the string counter
*/
void handle_char(va_list tse, int *count)
{
	char c = va_arg(tse, int);
	*count += print_char(c);
}
