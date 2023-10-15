#include "printf_heade.h"
#include <stdarg.h>
#include <stdio.h>
/**
* _printf - function that mimics the printf function
* @format: format checker
*@...: variable number of arguments
* Return: tse or the number of char printed
*/
int _printf(const char *format, ...)
{
	int i = 0;
	va_list tse;

	va_start(tse, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			putchar(*format);
			i++;
		}
		else
		{
			switch (*format)
			{
				case 'c' :
				i += fprintf(stdout, "%c", va_arg(tse, int));
				/* we are using int because it is bigger than the char*/
				/*when ever the char is passed through any variadic function*/
				/*it is automatically promoted to int */
				break;
				case 's':
				i +=  fprintf(stdout, "%s", va_arg(tse, char *));
				break;
				default:
				putchar('%');
				putchar(*format);
				i += 2;
				break;
			}
		}
		format++;
	}
	va_end(tse);
	return (i);
}

