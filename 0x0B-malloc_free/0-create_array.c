#include "main.h"
#include <stdlib.h>

/**
 * char *create_array - a function that create an array of chars
 * @size: size
 * @c: character
 * Return: NULL if size = 0 otherwise return pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = (char *)malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
