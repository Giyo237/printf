#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
*handle_unsigned - function that handles unsigned int
*@tse:argument
*@count:character counter
*/
void handle_unsigned(va_list tse, int *count)
{
	unsigned int n = va_arg(tse, unsigned int);

	print_unsig(n, count);
}
