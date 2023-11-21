#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
_putchar(h->n + '0');
_putchar('\n');
h = h->next;
count++;
}
return (count);
}

