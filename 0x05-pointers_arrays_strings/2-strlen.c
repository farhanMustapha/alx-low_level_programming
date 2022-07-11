#include <stdio.h>
#include "main.h"
/**
 * _strlen function that return the lenght of a string
 * @s: first parameter
 * return: i
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
	;
return (i);
}
