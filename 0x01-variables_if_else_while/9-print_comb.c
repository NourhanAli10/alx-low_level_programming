#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 0;
for (n; n <= 9; n++)
{
putchar(n + 48);
putchar((n == 9) ? 36 : 44);
putchar(32);
}
return (0);
}

