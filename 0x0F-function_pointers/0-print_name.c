#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
	printf("%s\n", name);
}
