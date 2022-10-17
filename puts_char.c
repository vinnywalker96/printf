#include "main.h"

/**
  * puts_char - function that prints formatted characters
  * @args: argument to print
  *
  * Return: returns length of character
  */


int puts_char(va_list args)
{
	int c = va_arg(args, int);

	_putchar(c);

	return (1);
}
