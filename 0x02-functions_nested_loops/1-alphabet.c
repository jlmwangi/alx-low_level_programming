#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase
 */

void print_alphabet(void); 
{
	char alphabet;

	for(alphabet = 'a'; alphabet<= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
}
