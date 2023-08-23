#include "main.h"

/**
 * print_unsigned_int - print the unsigned integer
 * @ap: va_list input arguments is from obtained
 * Return: 0
 */

int print_unsigned_int(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	int len = 0;

	len = print_int_helper(n);
	return (len);

	return (0);
}
