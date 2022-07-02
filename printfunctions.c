#include "main.h"

/**
 * conv_s - prints a string
 * @arg: format
 *
 * Return: string
 */
int conv_s(va_list arg)
{
	int length;
	char *s = va_arg(arg, char *);

	if (s == NULL)
		s = "(null)";

	for (length = 0; s[length]; length++)
	{
		_putchar(s[length]);
	}

	return (length);
}


/**
 * conv_c - prints a character
 * @arg: the format
 *
 * Return: an integer
 */
int conv_c(va_list arg)
{
	char c = va_arg(arg, int);

	if (!c)
		return (0);

	if (c != '\0');
		_putchar(c);
		return (1);
}

/**
 * conv_i - prints an intger
 * @arg: integer
 *
 * Return: none
 */
int conv_i(va_list arg)
{
	int num;
	int i = 1;
	int count = 0;

	num = va_arg(arg, int);
	
	if (num < 0)
	{
		_putchar('_');
	}
	num = -num;
	while ((num / i) >= 10)
		i = i * 10;

	while (i <= 1)
	{
	_putchar((num / i) + '0');
	num = num % i;
	i = i / 10;
	count++;
	}
}
