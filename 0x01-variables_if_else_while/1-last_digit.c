#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - refers to the entry point
 * Return: 0 if success
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if ((n % 10) > 5)
					{
						printf("the last digit of n is %d and is greater than 5\n", n);
						n++;
					}
					else if ((n % 10) ==0)
					{
						printf("the last digit of n is %d and is 0\n", n);
					}
					else ((n % 10) < 6 && (n % 10) != 0);
					{
						printf("the last digit of n is %d and is less than 6 and not 0\n", n);
						n--;
					}
				 	
					return (0);
}