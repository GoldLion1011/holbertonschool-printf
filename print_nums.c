#include "main.h"

/**
 * print_nums - prints specific function
 * @arg: format
 * @print: print
 * Return: a function
 */
int print_nums(char print, va_list arg)
{
	int i;

	printer_t funct[] = {
		{"i", conv_i},
		{"c", conv_c},
		{"s", conv_s},
		{"d", conv_d},
		{NULL, NULL}
	};

	for (i = 0; funct[i].spec != NULL; i++)
	{
		if (funct[i].spec[0] == print)
			return (funct[i].func(arg));
	}
	return (0);
}

