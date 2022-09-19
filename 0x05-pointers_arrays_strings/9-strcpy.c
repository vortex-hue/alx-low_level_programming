#include "main.h"

/**
 * _strcpy - a function that copies
 * @dest: to copy
 * @src: source
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
