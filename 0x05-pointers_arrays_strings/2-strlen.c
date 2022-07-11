#include <stdio.h>
#include "main.h"
/**
 * _strlen function that return the lenght of a string
 * @s: first parameter
 * return: length of the string 
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
	;
return (i);
}
