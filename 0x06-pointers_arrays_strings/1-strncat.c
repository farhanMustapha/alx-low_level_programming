#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of the concatenation
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int bb = 0, j = 0;
while (dest[bb])
{
bb++;
}
while (j < n && src[j])
{
dest[bb] = src[j];
bb++;
j++;
}
dest[bb + n + 1] = '\0';
return (dest);
}
