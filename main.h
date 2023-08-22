#ifndef MAIN_H
#define MAIN_H


#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct func_s - Struct func_s
 * @op: The operators
 * @f: The functions associated
 */

typedef struct func_s
{
	char *op;
	int (*f)(va_list);
} func_t;

/* the _putchar function */
int _putchar(char c);



/* the rev_string function */
void rev_string(char *s);


/* Function produces output according to format */
int _printf(const char *format, ...);

/* the print_str function */
int print_char(va_list ap);
int print_percent(va_list ap);
int print_string(va_list ap);

/* the print_int function */
int print_int_helper(int n);
int print_int(va_list ap);

/* the print_binary function */
int print_binary(va_list ap);

/* the print_unsigned function */
int print_unsigned_int(va_list ap);

#endif /* MAIN_H */
