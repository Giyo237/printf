#include <unistd.h>
#include "main.h"
#include <stdarg.h>
/**
* _printf - function that mimics the printf function
* @format:the format specifier checker
* @...: the variable number of arg
*/
int _printf(const char *format, ...)
{
	int count = 0;
	char ch;
	const char *str;
	va_list tse;
	va_start(tse, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					ch = (char) va_arg(tse, int);
					write(1, &ch, 1);
					count++;
					break;
				case 's':
					str = va_arg(tse, const char *);
					while (*str != '\0')
					{
						write(1, str, 1);
						str++;
						count++;
					}
					break;
				case '%':
					write(1, "%", 1);
					count++;
					break;
				default:
					write(1, "%", 1);
					write(1, format, 1);
					count += 2;
					break;
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(tse);
	return (count);
}
