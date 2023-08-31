#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 
*/
unsigned int binary_to_uint(const char *b)
{


    int len = 0;
    unsigned int decimal = 0;
    int i ;

    if (b == NULL)
            return (0);
    
    while (b[len] != '\0')
            len++;

    for (i = len - 1; i >= 0; i--)
    {
        if (b[i] == '0' || b[i] == '1' )
        {
             decimal = decimal + ((b[i] - '0') * (1u << (len - 1 - i)));

        }
        else
         {
            return (0);
        }
             
       
    }

    return (decimal);


}
