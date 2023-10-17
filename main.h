#ifndef P_HEADER
#define P_ HEADER
#include <stdarg.h>

int _printf(const char *format, ...);
void print_char(char c, int *count);
void print_str(char *s, int *count);
void print_percent(int *count);
void handle_char(va_list tse, int *count);
void handle_str(va_list tse, int *count);


#endif
