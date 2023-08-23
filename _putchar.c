#include <unistd.h>

/**
 * _putchar - write the characters c to the stdout
 * @c: The characters to print
 *
 * Return: On successss 1.
 * On error, -1 returned, and errno setted appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
