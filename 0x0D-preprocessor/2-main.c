#include "main.h"
#include <stdio.h>

/**
 * print_filename - prints the name of the file it was compiled from
 * followed by a new line.
 * Return: Always 0.
 */
int print_filename(void)
{
printf("%s\n", __FILE__);
return (0);
}
/**
 * main - Entry point of the program
 * Return: Always 0.
 */
int main(void)
{
print_filename();
return (0);
}
