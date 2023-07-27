#include <stdio.h>
#include "main.h"
/**
 * string_toupper - changes to uppercase
 * @s: parameter used
 * Return: string in uppercase
 */
char *string_toupper(char *s)
{
    int j = 0;  // Initialize 'j' with 0

    while (s[j])
    {
        if (s[j] >= 'a' && s[j] <= 'z')
        {
            s[j] -= 32;
        }
        j++;
    }
    return s;
}
