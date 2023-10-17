#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
* print_char - character checker
*@ch: character
* Return: count
*/
int print_char(char ch)
{
	write(STDOUT_FILENO, &ch, 1);
	return (1);
}
