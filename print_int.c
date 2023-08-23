#include "main.h"

/**
 * print_int_helper - the helper functions for the print_int
 * @n: number the to print
 *
 * Return: no of character printed
 */
int print_int_helper(int n)
{
	unsigned int i;
	int count = 0;

	i = n;
	if (n < 0)
	{
		_putchar('-');
		count++;
		i = -i;
	}

	if (i < 10)
	{
		count += _putchar(i + '0');
		return (count);
	}

	if (i > 9)
	{
		count += print_int_helper(i / 10) + 1;
		_putchar((i % 10) + '0');
		return (count);
	}

	return (0);
}

/**
 * print_int - Print the integer to stdout always
 * @ap: The argument pointerss
 *
 * Return: The no of the characters printed
 */
int print_int(va_list ap)
{
	int n = va_arg(ap, int);
	int count = 0;


	count = print_int_helper(n);
	return (count);
}
