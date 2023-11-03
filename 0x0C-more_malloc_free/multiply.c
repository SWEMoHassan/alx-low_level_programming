#include "main.h"

/**
 * multiply - multiplies two positive numbers represented
 * @num1: first number as string
 * @num2: second number as string
 * Return: pointer to the result string, NULL on failure
 */
char *multiply(char *num1, char *num2)
{
int len1 = strlen(num1);
int len2 = strlen(num2);
int len_result = len1 + len2;
int *result, i, j, carry, prod;
result = malloc(sizeof(int) * len_result);
if (result == NULL)
return (NULL);
for (i = 0; i < len_result; i++)
result[i] = 0;
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
prod = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
carry = prod / 10;
result[i + j + 1] = prod % 10;
}
result[i + j + 1] = carry;
}
char *result_str;
result_str = malloc(sizeof(char) * (len_result + 1));
if (result_str == NULL)
{
free(result);
return (NULL);
}
for (i = 0; i < len_result; i++)
result_str[i] = result[i] + '0';
result_str[len_result] = '\0';
free(result);
return (result_str);
}
