#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int print_char(char c);
int print_str(char *s);
int print_percent(int *count);
void handle_str(va_list tse, int *count);
void handle_char(va_list tse, int *count);

#endif
