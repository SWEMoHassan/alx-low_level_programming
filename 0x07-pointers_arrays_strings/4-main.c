#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    while (t != NULL)
    {
        _putchar(*t);
        t++;
        t = _strpbrk(t, f);
    }
    _putchar('\n');
    return (0);
}

