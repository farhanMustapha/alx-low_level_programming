#include "main.h"
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: first parameter
 * @accept : second parameter
 * Return: the string since the first found accepted character
 */
char *_strpbrk(char *s, char *accept)
{
int a = 0, b;
while (s[a])
{
b = 0;
while (accept[b])
{
if (s[a] == accept[b])
{
s = s + a;
return (s);
}
b++;
}
a++;
}
return ('\0');
}
