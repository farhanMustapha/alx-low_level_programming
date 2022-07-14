#include <stdio.h>
#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: first entry
 * @src: second entry
 * return 0
 */
char *_strcat(char *dest, char *src)
{
int aa = 0, i;
while (dest[aa])
{
aa++;
}
for (i = 0; src[i] != 0; i++)
{
dest[aa] = src[i];
aa++;
}
dest[aa] = '\0';
return (dest);
}
