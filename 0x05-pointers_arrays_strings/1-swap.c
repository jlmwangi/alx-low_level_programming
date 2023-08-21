#include "main.h"
/**
 * swap_int - swaps one integer to the other
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * return: (void)
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
