#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: the string to duplicate
 *
 * Return: the string duplicated
 */

char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i));
	if (s == NULL)
	return (NULL);

	while (a < i)
	{
	s[a] = str[a];
	a++;
	}
	s[a] = '\0';
	return (s);
}
