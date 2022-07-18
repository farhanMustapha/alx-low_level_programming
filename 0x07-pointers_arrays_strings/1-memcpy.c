#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: first entry
 * @src: second entry
 * @n: third entry
 * return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
