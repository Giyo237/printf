#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
*print_bin - function that prints binary numbers
*@n:unsigned integer
*/
void print_bin(unsigned int n)
{
	

	if (n > 1)
	{
		print_bin(n / 2);
	}
	print_char('0' + (n % 2));
}
