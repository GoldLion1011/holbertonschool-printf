#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct printer
{
	char *spec;
	int (*func)(va_list);

} printer_t;

int _printf(const char *format, ...);
int _putchar(char c); 
int conv_s(va_list arg);
int conv_c(va_list arg);
int conv_i(va_list arg);
int conv_d(va_list arg);
char *_itoa(int num, char *str);

#endif
