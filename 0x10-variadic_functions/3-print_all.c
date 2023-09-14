#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints all data types
 * @format: various data types
 *
 */
void print_all(const char * const format, ...)
{
	va_list x;

	va_start(x, format);

	vprintf(format, x);
	va_end(x);
	printf("\n");
}
