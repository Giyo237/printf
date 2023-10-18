#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
/**
* print_int - funtcion that prints int
*@num: the number integer to store
*Return:len
*/
int print_int(int num)
{
	char buf[1024];

	int l = snprintf(buf, sizeof(buf), "%d", num);

	write(STDOUT_FILENO, buf, l);
	return (l);
}
