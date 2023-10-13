#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program.
 * Return: Always 0.
 */

void print_remaining_days(int month, int day, int year);

int main()
{
	int month;
  int day;
  int year;
  printf("Enter the date (MM/DD/YYYY): ");
  scanf("%d/%d/%d", &month, &day, &year);
  print_remaining_days(month, day, year);

  return 0;
}
