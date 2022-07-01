#include "main.h"



int conv_s(va_list arg)
{
	int length;
	char *s = va_arg(arg, char *);

	if (s == NULL)
		s = "(null)";

	for (length = 0; s[length]; length++)
	{
		_putchar(str[length]);
	}

	return (length);
}

int conv_c(va_list arg)
{
	char *c = va_arg(arg, char *);

	if (c == NULL)
		c = "(null)";

	if (c != NULL)
		_putchar(c);
}
