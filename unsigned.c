#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_unsig - function that prints unsigned
*@n:integer
*base: base of integer
*@count:character count
*Return:count
*/
int print_unsig(unsigned int n, int *count)
{
	char buf[50];

	snprintf(buf, sizeof(buf), "%u", n);
	print_str(buf);
	return (*count);
}
