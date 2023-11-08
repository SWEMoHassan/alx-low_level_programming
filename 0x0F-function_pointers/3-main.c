#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array containing the command line arguments
 * Return: 0 , 98 , 99 , 100
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*func)(int, int);
if (argc != 4)
{
printf("Error\n");
return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
func = get_op_func(argv[2]);
result = func(num1, num2);
printf("%d\n", result);
return (0);
}
