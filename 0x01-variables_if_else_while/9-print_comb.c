#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar(n + 48);
putchar((n == 9) ? 32 : 44);
putchar(32);
}
return (0);
}

