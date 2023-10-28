#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: The string to be printed
 */
void print_string(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
}
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
print_string(argv[i]);
_putchar('\n');
}
return (0);
}
