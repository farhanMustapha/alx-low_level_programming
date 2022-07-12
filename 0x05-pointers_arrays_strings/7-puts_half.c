#include <stdio.h>
#include "main.h"
/**
 * puts_half - faunctio that prints half of a string, followed by a new line.
 * @str: first entry
 * return 0
 */
void puts_half(char *str)
{
int i = 0, n;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 1)
{
n = (i + 1) / 2;
while (str[n] != '\0')
{
putchar(str[n]);
n++;
}
}
else
{
n = (i / 2);
while (str[n] != '\0'){
putchar(str[n]);
n++;	
}
}
putchar('\n');
}
