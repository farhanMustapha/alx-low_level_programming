#include <stdio.h>
#include "main.h"
/**
 * puts_half - faunctio that prints half of a string, followed by a new line.
 * @str: first entry
 * return 0
 */
void puts_half(char *str)
{
int i;
for (i = 0; i <= sizeof(str); i++)
{
putchar(str[i]);
}
putchar('\n');
}
