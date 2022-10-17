#include "main.h"

/**
  * print_digit - converts numbers and base to str
  * @num: input number
  * @base: input base
  * @lowercase: hex value
  * Return: str
  */

char *print_digit(unsigned long int num, int base, int lowercase)
{
	static char *res;
	static char buffer[50];
	char *dest;

	res = (lowercase) ? "0123456789abcdef"
		: "0123456789ABCDEF";
	dest = &buffer[49];
	*dest = '\0';
	do {
		*--dest = res[num % base];
		num /= base;
	} while (num != 0);

	return (dest);
}
