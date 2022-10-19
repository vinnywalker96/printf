#include "main.h"


/**
 * _puts - Prints a string to stdout
 *
 * @str: Pointer to the string to print
 *
 * Return: Lumber of chars written
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
