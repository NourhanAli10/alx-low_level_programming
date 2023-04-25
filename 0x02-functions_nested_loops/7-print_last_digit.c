#include "main.h"
/**
* print_last_digit - that prints the last digit of a number.
* @n : is input number
* Return: the value of the last digit
*/
int print_last_digit(int n)
{
int ld;
ld = n % 10;
if (ld > 0)
{
_putchar(-ld + 48);
return (-ld);
}
else
{
_putchar(ld + 48);
return (ld);
}
}
