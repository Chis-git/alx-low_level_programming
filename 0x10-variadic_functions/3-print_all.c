#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list valist;
	char *str, *sep = "";
	const char t_arg[] = "cifs";

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(valist, int)), c = 1;
				break;
			case 'i':
				printf("%s%d", sep, va_arg(valist, int)), c = 1;
				break;
			case 'f':
				printf("%s%f", sep, va_arg(valist, double)), c = 1;
				break;
			case 's':
				str = va_arg(list, char *), c = 1;
				if (!str)
				
					str = "(nil)";
			
				
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
	       	i++;
		printf("\n"), va_end(valist);
	}
}
