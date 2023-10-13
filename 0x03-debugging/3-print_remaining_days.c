#include <stdlib.h>
#include "main.h"
#include <stdbool.h>

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year) {
  bool is_leap_year = (year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0);
  int day_of_year = day;
  int i;
  for (i = 1; i < month; i++) {
    day_of_year += 31;
  }
  if (is_leap_year && month > 2) {
    day_of_year++;
  }
  printf("Day of the year: %d\n", day_of_year);
  printf("Remaining days: %d\n", is_leap_year ? (366 - day_of_year) : (365 - day_of_year));
}
