#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
* handle_str - function that handles string
*@tse: argument
*@count: number of characters printed
*/
void handle_str(va_list tse, int *count)
{
	char *s;

	s = va_arg(tse, char *);
	print_str(s, count);
}
