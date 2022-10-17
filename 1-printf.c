#include "main.h"


/**
  * _printf - printf function
  * @format: takes a number of argument
  *
  * Return: result
  */

int _printf(const char *format, ...)
{
	va_list args;
	int result;

	va_start(args, format);
	result = vfprintf(stdout, format, args);
	va_end(args);

	return (result);
}
