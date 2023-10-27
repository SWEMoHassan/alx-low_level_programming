#include "main.h"

int main(int __attribute__((unused)) argc, char *argv[])
{
int count = 0;
while (argv[count] != NULL)
{
count++;
}
_putchar(count + '0');
_putchar('\n');
return (0);
}
