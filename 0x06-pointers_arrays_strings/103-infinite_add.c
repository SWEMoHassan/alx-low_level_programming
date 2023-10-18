#include "main.h"

/**
 * infinite_add - Adds two numbers represented as strings
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to result string, or 0 if cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum, i;

while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;

if (len1 + 1 > size_r || len2 + 1 > size_r)
return (0);

r[size_r] = '\0';
len1--;
len2--;
for (i = size_r - 1; len1 >= 0 || len2 >= 0 || carry; i--)
{
sum = carry;
if (len1 >= 0)
sum += n1[len1] - '0';
if (len2 >= 0)
sum += n2[len2] - '0';

carry = sum / 10;
r[i] = (sum % 10) + '0';

if (len1 >= 0)
len1--;
if (len2 >= 0)
len2--;
}

if (r[i + 1] == '0')
return (r + i + 1);
else
return (r + i);
}

