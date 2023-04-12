#include "main.h"
#include <stdlib.h>

/**
 * char *_strdup - a function that returns a pointer to a newly allocated space
 * @str: string
 * Return: NULL if str = NULL otherwise return a pointer
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{

		s++;
	}
	p = malloc(sizeof(char) * (s + 1));

	if (p == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];
	return (p);
}
