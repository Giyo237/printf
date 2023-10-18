#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
/**
* handle_bin - function that handles binary
* @tse:argument
*@count:character counter
*Return: count
*/
void handle_bin(va_list tse, int *count)
{
	int len = 0;
	unsigned int t;

	unsigned int num = va_arg(tse, unsigned int);
	print_bin(num);
	t = num;
	while (t != 0)
	{
		len++;
		t /= 2;
	}
	*count += len;
}


