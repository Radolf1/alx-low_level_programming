#include <stdio.h>
/**
 * @str: The string to get the length
 * _strlen - a function that returns the length of a string.
 * Return - nothing
 */
size_t _strlen(const char *str)
{
size_t length = 0;
while (*str++)
{
length++;
}
return (length);
}
