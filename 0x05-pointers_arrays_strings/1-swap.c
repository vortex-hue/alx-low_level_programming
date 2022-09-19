#include "main.h"

/**
 *swap_int - swaps the value of two integer
 *@a : 1 pointer
 *@b : 2 pointer
 * Return : void
 */


void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
