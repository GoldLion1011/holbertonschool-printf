#include "main.h"

/**
 * print_nums - prints specific function
 * @arg: format
 * @print: print
 * Return: a function
 */
int print_nums(char *print, va_list arg)
{
	int i;

	flag funct[] = {
		{"i", conv_i},
		{"c", conv_c},
		{"s", conv_s},
		{"d", conv_d},
		{NULL, NULL}
	};

	for (i = 0; funct[i].mod != NULL; i++)
	{
		if (funct[i].mod[0] == print)
			return (funct[i].f(arg));
	}
	return (0);
}

