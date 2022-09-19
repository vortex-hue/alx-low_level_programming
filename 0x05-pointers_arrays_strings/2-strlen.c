#include "main.h"

/**
 * _strlen - return len of a str
 * @s : a pointer starting
 *  Return: the len of a str
 */

int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
    {
        len++;
    }

    return (len);
}
