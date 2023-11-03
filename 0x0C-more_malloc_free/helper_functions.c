#include "main.h"

/**
 * is_positive_number - checks if a string contains only digits
 * @str: input string
 * Return: 1 if string contains only digits, 0 otherwise
 */
int is_positive_number(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}
/**
 * print_error - prints Error followed by a new line
 */
void print_error(void)
{
write(1, "Error\n", 6);
}
/**
 * print_result - prints a string followed by a new line
 * @result: string to be printed
 */
void print_result(char *result)
{
while (*result == '0' && *(result + 1) != '\0')
result++;
while (*result)
{
_putchar(*result);
result++;
}
_putchar('\n');
}
