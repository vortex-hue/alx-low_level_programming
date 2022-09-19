#include "main.h"

/**
 * _puts - write string
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
