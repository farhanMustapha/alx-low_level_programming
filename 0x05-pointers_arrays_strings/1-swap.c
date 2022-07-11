#include <stdio.h>
#include "main.h"
/**
 * swap_int - function that swaps the value of two integers.
 * @a: first entry
 * @b: second entry
 * return: nothing
 */
void swap_int(int *a, int *b)
{
int x;
x = *a,
*a = *b;
*b = x;
}
