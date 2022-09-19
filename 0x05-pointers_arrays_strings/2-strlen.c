#include "main.h"

/**
 * _strlen - return len of a str
 * @s : a pointer starting
 *  Return: the len of a str
 */

int _strlen(char *s)
{
    int length =0;

    while(s[length] != '\0')
    {
        length++;
    }
    return (length);
}
