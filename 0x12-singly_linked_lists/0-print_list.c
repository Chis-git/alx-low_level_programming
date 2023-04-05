#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * print_list - print all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: the number of nodes printed
 */
size_t print_list(const  list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
	}
	return (count);
}
