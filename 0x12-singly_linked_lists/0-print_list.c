#include <stdio.h>
#include "lists.h"

/**
 * print_list - this code prints all the elements of a linked list
 * @n: pointer to the list_t list to print
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[0] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
