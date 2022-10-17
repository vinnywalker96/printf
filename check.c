#include "main.h"


/**
  * check - check format specifier
  * @format: string character
  * @count: check value
  * @i: integer counter
  * Return: len
  */

int check(const char *format, int count, int i)
{
	int len = 0;

	if (!count && format[i] != '%')
	{
		len++;
		len++;
		_putchar('%');
		_putchar(format[i]);
	}

	return (len);
}
