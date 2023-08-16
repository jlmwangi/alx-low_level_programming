#include <stdio.h>
#include "main.h"
/**
 * main - presents the entry information
 *
 * Return; 0(successful)
 */
void print_alphabet(void);

int main(void)                                                                                                          {                                                                                                                               print_alphabet();                                                                                                       putchar('\n');                                                                                                          return 0;                                                                                                       }           

void print_alphabet(void)
{
		for (int c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
}
