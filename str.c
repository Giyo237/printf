#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
*handle_str - funtion that checks for strings
*@tse:argument
*@count: character counter
*/
void handle_str(va_list tse, int *count)
{
	char *s = va_arg(tse, char *);
	*count += print_str(s);
}
