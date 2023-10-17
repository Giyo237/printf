#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
*print_str - funttion that prints string
*@s:pointer to string
*Return: count
*/
int print_str(char *s)
{
	int count = 0;

	while(*s)
	{
		write(STDOUT_FILENO, s, 1);
		s++;
		count++;
	}
	return (count);
}
