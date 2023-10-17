#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _printf - function that mimics the printf function
 * @format: format specifier checker
 * @...: The variable number of args
 * Return: count or number of characters printed
 */
int _printf(const char *format, ...)
{
	int c = 0, ch;
	va_list tse;
	char *str;

	va_start(tse, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
		if (*format == '%')
		{
			write(1, "%", 1);
			c++;
		}
		else if (*format == 'c')
		{
		ch = (char) va_arg(tse, int);
		write(1, &ch, 1);
			c++;
		}
		else if (*format == 's')
		{
			str = va_arg(tse, char *);
			while (*str)
			{
				write(1, str, 1);
				str++;
				c++;
			}
		}
		}
		else
		{
			write(1,format,1);
			c++;
		}
		format++;
	}
	va_end(tse);
	return (c);
}
