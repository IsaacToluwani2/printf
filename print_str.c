#include "main.h"

/**
 * print_char - Print the character to stdout
 * @ap: The argument pointerss
 *
 * Return: The no of the character to be printed
 */
int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - Print the string to the stdout
 * @ap: The argument pointerss
 *
 * Return: The no of the character printed
 */
int print_string(va_list ap)
{
	char *s = va_arg(ap, char *);
	int i, ret = 0;

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		ret++;
	}
	return (ret);
}

/**
 * print_percent - Print the percent to stdout
 * @ap: The argument pointers
 *
 * Return: The number of the character printed
 */
int print_percent(va_list ap __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
