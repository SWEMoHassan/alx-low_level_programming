#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 * function:checks if the number is P, N or Zero
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("%d is ", n);
if (n > 0)
	printf("positive\n");
else if (n == 0)
	printf("zero\n");
else
	printf("negative\n");

return (0);
}
