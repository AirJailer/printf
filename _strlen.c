#include "main.h"

/**
 * _strlen - Return the length of a string.
 * @s: Type char pointer
 * Return: c.
 */

int _strlen(char *s)
{
        int c;

        for (c = 0; s[c] != 0; c++)
                ;
        return (c);
}
