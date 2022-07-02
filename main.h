#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

<<<<<<< HEAD
typedef struct print
	{	
		char *conv;
		int(*f)(va_list);
	} flag;





=======
typedef struct printer
{
	char *spec;
	int (*func)(va_list);

} printer_t;
>>>>>>> 9aaa84d11aee6f0e674dd2364e41e70a8568f8b1

int _printf(const char *format, ...);
int _putchar(char c); 
int conv_s(va_list arg);
int conv_c(va_list arg);
int conv_i(va_list arg);


#endif
