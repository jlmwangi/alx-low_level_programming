#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints all data types
 * @format: various data types
 */
void print_all(const char * const format, ...)
{
	va_list x;
	int i;

	va_start(x, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == 'c')
		{
			char c = va_arg(x, int);

			printf("%c", c);
		}
		else if (format[i] == 'd')
		{
			int n = va_arg(x, int);

			printf("%i", n);
		}
		else if (format[i] == 'f')
		{
			double f = va_arg(x, double);

			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			char *s = va_arg(x, char *);

			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", va_arg(x, char *));
			}
		}
	}
	va_end(x);
	printf("\n");
}
