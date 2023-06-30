#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: the ending string
 * @src: the source string
 * Return: true
 */
char *_strcat(char *dest, char *src)
{
	int deslen = 0;
	int i = 0;
	while (dest[deslen++])
	deslen++;
	for (i = 0; src[i] != 0; i++)
	dest[deslen++] = src[i];
	dest[deslen] = '\0';
	return (dest);
}
