#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
* print_percent - function that handles the %
* @count: number of characters printed
* Return:count
*/
int print_percent(const  char *format, int *count)
{
	print_char('%');
	print_char(*format);
	*count += 2;
	return (*count);
}
