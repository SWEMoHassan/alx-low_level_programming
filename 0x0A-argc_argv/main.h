#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
void _puts(char *str);
void print_string(char *str);
int multiply(int a, int b);
int calculateCoins(int cents);
int add_positive_numbers(int argc, char **argv);
int count_arguments(int argc);
void print_program_name(char **argv);
int main(int argc, char **argv);

#endif /* MAIN_H */

