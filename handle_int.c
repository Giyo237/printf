#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
*handle_int - funtion that checks for int
*@count: character counter
*@tse:argument
*/
void handle_int(va_list tse, int *count)
{
	int num = va_arg(tse, int);
	*count += print_int(num);
}
