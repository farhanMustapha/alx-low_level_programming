#include <stdio.h>
#include "main.h"
/**
 * print_array -function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: first entry
 * @n: number of element of array
 * return nothing
 */
void print_array(int *a, int n)
{
int arr[n];
int i;
for (i = 0; i <= sizeof(arr[n]); i++)
{
printf("array element are : %d\n ", arr[i]);
}
}
