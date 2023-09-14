#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string to be printed
 * @n: unsigned int
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
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
		printf("%d", va_arg(x, unsigned int));

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(x);
	printf("\n");
}

