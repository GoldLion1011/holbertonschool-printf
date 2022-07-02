#include "main.h"

/**
 *
 *
 */
int print_nums(char print, va_list arg)
{
	int i;

	funct[] = {
		{"i", conv_i},
		{"c", conv_c},
		{"s", conv_s},
		{NULL, NULL}
	};

	for (i = 0; funct[i].mod != NULL; i++)

