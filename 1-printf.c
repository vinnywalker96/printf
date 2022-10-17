#include "main.h"


/**
  * _printf - printf function
  * @format: takes a number of argument
  *
  * Return: result
  */

int _printf(const char *format, ...)
{
	int i = 0;
	int j;
	int count;
	int len = 0;
	va_list args;

	params_t types[] = {
		{'c', puts_char},
		{'s', puts_str}
	};

	if (format || (format[0] == '%' && format[1] == 0))
	{
		return (-1);
	}

	va_start(args, format);

	while (!format && format[i])
	{
		if (format[i] != '%')
		{
			len += _putchar(format[i]);
		}
		else
		{
			i++;
			if (format[i] == '%')
			{
				len += _putchar('%');
			}

			count = 0;

			for (j = 0; j < 2; j++)
			{
				if (format[i] == types[j].op)
				{
					len += types[j].f(args);
					count = 1;
					break;

				}
			}
			len += check(format, count, i);

		}
		i++;

	}

	va_end(args);
	return (len);

}
