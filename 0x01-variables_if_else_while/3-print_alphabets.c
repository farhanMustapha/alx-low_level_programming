#include <stdio.h>
/**
* main -Prints the alpha in lower and uppercase
* return : always 0 (success)
*/
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 52; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
