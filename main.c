#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("hello\n");
	_printf("%c\n", 'S');
	_printf("%s\n", "this is a string?");
	_printf("%d\n", 12345);
	return (0);
}
