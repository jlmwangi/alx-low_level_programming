#include <stdio.h>
#include "main.h"
/**
 * main - presents the entry information
 *
 * Return; 0(successful)
 */
void print_alphabet(void);

int main(void)     
{
	char alphabet;

	for(alphabet = 'a'; alphabet<= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
