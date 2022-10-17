#ifndef MAIN_H
#define MAIN_H

#define BUFSIZE 1024

#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  * struct params - struct params
  * @op: struct operator
  * @f: function
  */

typedef struct params
{
	char op;
	int (*f)(va_list args_t);
} params_t;


/* Function prototypes */

int _printf(const char *format, ...);
int _putchar(char c);
int puts_char(va_list args);
int puts_str(va_list args);
int check(const char *format, int count, int i);
char *print_digit(unsigned long int num, int base, int lowercase);


#endif
