#include "main.h"
/**
 * _printf - print strings and chars to stdout
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

	printer_t funct[] = {
		{"i", conv_i},
		{"c", conv_c},
		{"s", conv_s},
		{"d", conv_d},
		{NULL, NULL}
	};

	while (format[i] != '\0')
	{
		_putchar(format[i]);
		i++;

		if (format[i + 1] == '%')
		{
			_putchar('%'), counter++, i++;
		continue;
		}

		else if (format[i + 1] == 'c')
		{
			_putchar(funct[c].spec);
		continue;
		}

		else (format[i + 1] == 's')
		{
			_putchar(funct[s].spec);
		}		
			
	for (i = 0; funct[i].spec != NULL; i++)
	{
		if (*func[i].spec[0] == print)
			return (func[i].func(arg));
	}
	return (0);
