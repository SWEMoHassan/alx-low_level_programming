#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int cents, coins;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
coins = calculateCoins(cents);
printf("%d\n", coins);
return (0);
}

/**
 * calculateCoins - Calculates the minimum coins
 * @cents: Amount in cents
 * Return: Minimum number of coins
 */
int calculateCoins(int cents)
{
int coins = 0;
int denominations[] = {25, 10, 5, 2, 1};
int i;
for (i = 0; i < 5; i++)
{
coins += cents / denominations[i];
cents %= denominations[i];
}
return (coins);
}
