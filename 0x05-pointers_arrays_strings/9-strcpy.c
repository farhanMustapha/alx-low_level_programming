#include <stdio.h>
#include "main.h"
/**
 * _strcpy - function that copies the string pointed
 *  @dest: first parameter
 *  @src: second parameter
 *  return 0
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
{
dest[i] = src[i];
}
dest[i] = src[i];
return (dest);
}

