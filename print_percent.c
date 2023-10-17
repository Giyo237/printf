#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
* print_percent - function that handles the %
* @count: number of characters printed
* Return:count
*/
int print_percent(int *count)
{
	count += print_char('%');
	return (*count);
}
