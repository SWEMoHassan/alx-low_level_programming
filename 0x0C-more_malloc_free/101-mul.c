#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
char *num1, *num2, *result;
if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
{
print_error();
return (98);
}
num1 = argv[1];
num2 = argv[2];
result = multiply(num1, num2);
if (result == NULL)	{
print_error();
return (98);
}
print_result(result);
free(result);
return (0);
}
