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
int handle_bin(va_list tse, int *count)
{
	int len = 0;
	char i;
	int t;

	int num = va_arg(tse, int);

	if (num < 0)
	{
		print_char('1');
		num = -num;
	}
	for (i = 0; i < 'z'; i++);
	if (num  > i)
		return (-1);
	print_bin(num);

	while (t > 0)
	{
		len++;
		t /= 2;
	}
	*count += len;
	return (*count);
}


