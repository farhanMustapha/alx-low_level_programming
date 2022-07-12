#include <stdio.h>
#include "main.h"
/**
 * puts2 -function that prints every other character of a string,
 *  starting with the first character, followed by a new line.
 *  @str: first entry
 *  return 0
 */
void puts2(char *str)
{
int i;
for (i = 0 ; i <= sizeof(*str); i++)
{
printf("caractere are : %d\n ", str[i]);
}
}
