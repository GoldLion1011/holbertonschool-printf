#include "main.h"
/**
 * _printf - print strings and int to stdout
 * @format: specifier to print
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	char i;
	int counter = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		_putchar(format[i]);
		i++;
	}
}
