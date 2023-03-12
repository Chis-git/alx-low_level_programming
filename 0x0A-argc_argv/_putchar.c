#include <stdio.h>
#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 returned and errno is set appropriatel.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
