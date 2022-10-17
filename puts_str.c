#include "main.h"

/**
  * puts_str -function that prints formatted string
  * @args: argument to print
  * Return: length of string
  */

int puts_str(va_list args)
{
	int i;
	int j;
	char *str = "(null)";
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}

		return (6);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}

	return (j);

}
