#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry mark
 *
 * Return: Always 0 (success)
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if (n > 0)
					{
						printf("is positive %d\n", n);
							n++;
					}
					else if (n == 0)
					{
						printf("is zero %d\n", n);
					}
					else
					{
						printf("is negative %d\n", n);
							n--;
					}
					return (0);
}
