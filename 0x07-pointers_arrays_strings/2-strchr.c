#include "main.h"
/**
 * _strchr - locate character in string
 * @s: first entry
 * @c: second entry
 * Return : the string from character found
 */
char *_strchr(char *s, char c)
{
int a = 0, b;
while (s[a])
{
a++;
}
for (b = 0; b <= a; b++)
{
if (c == s[b])
{
s = s + b;
return (s);
}
}
return ('\0');
}
