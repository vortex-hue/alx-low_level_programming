#include "main.h"

/**
 * swap_int - swap values of two nums
 *@b : first pointer
 *@a : Second pointer
 * Return: void or nothing
 */
void swap_int(int *a, int *b)
{
    int cst = *a;
    *a = *b;
    *b = cst;
}
