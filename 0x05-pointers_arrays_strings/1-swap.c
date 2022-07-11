#include <stdio.h>
void swap_int(int *a, int *b)
{
int x;
x = a,
a = b;
b = x;
printf("value %d\n ,%d\n ", a, b);
}
