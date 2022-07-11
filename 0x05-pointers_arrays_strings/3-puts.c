#include <stdio.h>
#include "main.h"
/**
 * _puts - function that print string 
 * @str: first parameter
 * return: no thing
 */
void _puts(char *str)
{
for(; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
