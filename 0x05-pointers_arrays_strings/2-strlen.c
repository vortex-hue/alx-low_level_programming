#include "main.h"

/**
 * _strlen - returns the len of a str
 * @s : pointer
 *return - void
 */

int _strlen(char *s)
{
    int len = 0;
    while (s[len] != 0)
    {
        len++;
    }
    return len;
}