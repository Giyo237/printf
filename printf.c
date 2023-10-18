#include "main.h"
#include <stdarg.h>
/**
* _printf - function that mimics printf
* @format: specifier cchecker
* @..:variable number of arguments
*Return: number of charaters printed
*/
int _printf(const char *format, ...)
{
	int count = 0;
	const char *ptr = format;
	va_list tse;

	va_start(tse, format);
while (*ptr)
{
	if (*ptr == '%')
	{
		ptr++;
	switch (*ptr)
	{
	case 'c':
		handle_char(tse, &count);
		break;
	case 's':
		handle_str(tse, &count);
		break;
	case '%':
		print_percent(format, &count);
		break;
	case 'd':
	case 'i':
		handle_int(tse, &count);
		break;
	case 'b':
		handle_bin(tse, &count);
		break;
	case 'u':
		handle_unsigned(tse, &count);
		break;
	default:
		break;
	}
	}
	else
	{
		count += print_char(*ptr);
	}
	ptr++;
}
va_end(tse);
return (count);
}
