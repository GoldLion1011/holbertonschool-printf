#include "main.h"
/**
 * _printf - print strings and int
 * @format: specifier
 *
 *
 */
int _printf(const char *format, ...)
{
	char i;

	while (format[i] != '\0')
	{
		_putchar(format[i]);
		i++;
	}
}
