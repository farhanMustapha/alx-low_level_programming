#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints the alphabet without q and e.
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 26; i++)
{
if (i != 4 && i !=16 )
{
putchar(i);
}
}
putchar('\n');
return (0);
}
