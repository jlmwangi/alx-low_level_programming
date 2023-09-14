#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between
 * @n: unsigned int
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list x;

	if (separator == NULL)
	{
		return;
	}

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(x, const char *);

		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(x);
	printf("\n");
}
