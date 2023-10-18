#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(char c);
int print_str(char *s);
int print_int(int num);
int print_unsig(unsigned int n, int *count);
void handle_unsigned(va_list tse, int *count);
void handle_bin(va_list tse, int *count);
void print_bin(unsigned int n);
void handle_int(va_list tse, int *count);
int print_percent(int *count);
void handle_str(va_list tse, int *count);
void handle_char(va_list tse, int *count);


#endif
